/*
 * main.cpp
 *
 *  Created on: Aug. 8, 2020
 *      Author: Osama
 */
#include "Array.h"
#include "Array.cpp"


#include <iostream>
#include <string>
using namespace std;

int main()
{
	Array<int> intArray (5);
	Array<double> doubleArray{5};
	Array<string> stringArray{3};

	cout << "Please enter 5 integers" << endl;
	cin >> intArray;
	cout << "Please enter 5 doubles" << endl;
	cin >> doubleArray;
	cout << "Please enter 3 strings" << endl;
	cin >> stringArray;
}
