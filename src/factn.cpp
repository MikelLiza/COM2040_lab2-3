/*
 * factn.cpp
 *
 *  Created on: 12 Nov 2020
 *      Author: mikel
 */
#include "fact.h"

int factorial(int number) {
	int result = 1;
	for (int count=2; count <= number; count++)
		result *= count;
	return result;
}



