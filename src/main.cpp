/*
 * main.cpp
 *
 *  Created on: Aug. 8, 2020
 *      Author: Osama
 */
#include "Array.h"
#include "Array.cpp"


#include <iostream>
#include <fstream>
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

	// Create and open a text file
	ofstream MyFile("Template.txt");

	MyFile << "The integers inputted are: ";
	for (size_t i=0; i<intArray.getSize(); i++)
		MyFile << intArray[i] << (i!=intArray.getSize()-1 ? "," : "\n");

	MyFile << "The doubles inputted are: ";
	for (size_t i=0; i<doubleArray.getSize(); i++)
		MyFile << doubleArray[i] << (i!=doubleArray.getSize()-1 ? "," : "\n");

	MyFile << "The strings inputted are: ";
	for (size_t i=0; i<stringArray.getSize(); i++)
		MyFile << stringArray[i] << (i!=stringArray.getSize()-1 ? "," : "\n");
}
