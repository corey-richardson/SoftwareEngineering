#include <stdio.h>
#include "../../comp1000/comp1000utils.h"

int main()
{
	//Read the terminal input
	unsigned char c = 0b10101100;
	displayAndCompare(c); // 10101100 --> 172

	//Shift left 56 bits and store in a 64bit variable
	//
	//We expect the output to be 0b10101100 00000000 00000000 00000000 00000000 00000000 00000000 00000000
	// 'c' is of type 'char', so the bitshift causes an overflow BEFORE it is copied over to 'x'
	/*
	unsigned long long x = c << 56;
	*/
	// Cast c to a larger sized type before carrying out the operation
	unsigned long long x = (unsigned long long)c << 56;
	displayAndCompare(x);

	//Solution is in the lab notes

	//This also needs fixing
	int p = 123;
	int q = 2;
	// double y = p / q; // 61 (truncates the 0.5)
	double y = (double)p / q;
	printf("y = %f\n", y);
}
