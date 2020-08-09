// Array.h
// Array class definition with overloaded operators.
#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <stdexcept>


template <class T>
class Array {

public:
	template <class Y>
	friend std::ostream& operator<<(std::ostream&, const Array<Y>&);
	template <class Y>
	friend std::istream& operator>>(std::istream&, Array<Y>&);


	explicit Array(int arraySize);
	Array(const Array&); // copy constructor
	~Array();
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
