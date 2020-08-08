// Array.h
// Array class definition with overloaded operators.
#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

template <class T>
class Array {

public:
	friend std::ostream& operator<<(std::ostream&, const Array&);
	friend std::ostream& operator>>(std::istream&, const Array&);

	explicit Array(int = 10); // default constructor
	Array(const Array&); // copy constructor
	~Array(); // destructor
	size_t getSize() const;	// return size

	const Array& operator=(const Array&); // Assignment operator
	bool operator== (const Array&) const; // equality operator

	// inequality operator; returns opposite of == operator
	bool operator!=(const Array& right) const {
		return ! (*this == right); // invokes Array::operator==
	}

	//subscript operator for non-const objects returns modifiable lvalue
	T& operator[](int);

	// subscript operator for const objects returns rvalue
	T operator[](int) const;
private:
	size_t size; // pointer-based array size
	T* ptr; // pointer to first element of pointer-based array

};
#endif
