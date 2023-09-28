#include <stdio.h>
#include <iostream>
#include "comp1000utils.h"

int main()
{
	//Create and initialise a 16-bit variable
	unsigned short number = 0b0000000000001011;

	//Write to the terminal (using the tutors bespoke function)
	displayAndCompare(number);

	//Shift it left 1 bit position (binary operator)
	number = number << 1;
	displayAndCompare(number);

	//And again, only using the unary operator
	number <<= 1;
	displayAndCompare(number);

	//Shift left 2 bits
	number <<= 2;
	displayAndCompare(number);

	//Right right 4 bits
	number >>= 4;
	displayAndCompare(number);

	//TASKS:

	//Shift right by 1 and display
	number >>= 1;
	displayAndCompare(number);

	//Shift left by 1 and display
	number <<= 1;
	displayAndCompare(number);

}

/*
Binary value 0000000000001011 is decimal 11
Binary value 0000000000010110 is decimal 22
Binary value 0000000000101100 is decimal 44
Binary value 0000000010110000 is decimal 176
Binary value 0000000000001011 is decimal 11
Binary value 0000000000000101 is decimal 5
Binary value 0000000000001010 is decimal 10
*/

// LSB is lost