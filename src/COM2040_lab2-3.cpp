/*
 * COM2040_lab2-3.cpp
 *
 *  Created on: 12 Nov 2020
 *      Author: mikel
 */
#include <iostream>

#include "fact.h"
using namespace std;

int main() {
	int number;

	do{
		cout << "Enter integer 2-7";
		cin >> number;
		cout << "\n\n";
		if ((number<2)||(number>7))
			cout << "Number must be in the range 2-7.\n\n";
	} while ((number<2)||(number>7));
	cout << "\n\n"<<number<<"! = ";
	cout << factorial(number)<<"\n\n";
	return 0;
}





