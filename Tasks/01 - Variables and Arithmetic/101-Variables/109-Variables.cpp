#include <stdio.h>

int main()
{ // Block opening brace

	char c = 88;				// Character (1 byte)
	short year = 2023;			// Short integer
	int age = 23;				// Integer
	long bigNumber = 123456789;	// Long integer
	long long veryBigNumber = 1LL << 30;	//2^30 - challenge (advanced), why have I put 1LL?
											// Left shift operator is used to calculate powers of two; more efficient than POW
											// LL indicates a 'long long' datatype

	printf("c=%d\n", c); // %d is int, 88 ascii code
	printf("year = %hd\n", year); // between -32767 to +32767, 2023 is in range so 2023 will output
	printf("age = %d\n", age); // int, -2147483648 to 2147483647, 23 in range so will output
	printf("bigNumber = %ld\n", bigNumber); // long int, -9223372036854775808 to 9223372036854775807, definitely in range
	printf("veryBigNumber = %lld\n", veryBigNumber); // long long int, 	-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807, much big

	//Addition
	int ageNextYear;
	ageNextYear = age + 1;
	printf("Next birthday, you will be %d\n", ageNextYear); // 24

	//Increment
	ageNextYear++;
	printf("And then after that, you will be %d\n", ageNextYear); // 25

	//Overflow
	year = 32767;
	year = year + 1;
	printf("year = %d\n", year); // will wraparound to -32767? (-32768)

	//Divide
	age = 50;
	age = age / 2;
	printf("Half of 50 is %d\n", age); // 25
	 
	//Divide and remainder
	age = 51;
	age = age / 2;
	int remainder = age % 2;
	printf("Half of 51 is %d, remainder %d\n", age, remainder); // int will cause truncation, 25 remainder 1

} 