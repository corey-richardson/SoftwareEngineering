#include <stdio.h>

int main()
{
	char x = 10;
	short s = -12345;
	int integerValue = 1234567891;
	long bigValue = 1234567891;
	long long veryBigValue = -123456789123456789;
	unsigned long long sillyBigPositiveValue = 12345678912345678912;

	//How to write values to the terminal
	printf("x = %d\n", x);
	printf("s = %d\n", s);
	printf("integerValue = %d\n", integerValue);
	printf("bigValue = %ld\n", bigValue);
	printf("veryBigValue = %lld\n", veryBigValue);
	printf("sillyBigPositiveValue = %llu\n", sillyBigPositiveValue);

	//Extra newline
	printf("\n");

	//Display a table of date types and sizes
	printf("Type              \tSize(Bytes)\n");	//The \t character is a TAB
	printf("----              \t-----------\n");

	//TASK: Display the size of ALL the integer data types
	// Write your solution below here. The first one is done for you.
	printf("char              \t%llu\n", sizeof(char));	//sizeof() returns a value of type unsigned long long

	printf("short             \t%llu\n", sizeof(short));
	printf("int               \t%llu\n", sizeof(int));
	printf("long              \t%llu\n", sizeof(long));
	printf("long long         \t%llu\n", sizeof(long long));
	printf("unsigned long long\t%llu\n", sizeof(unsigned long long));

	printf("The size of variable sillyBigPositiveValue is %llu\n", sizeof(sillyBigPositiveValue));

}

/*
x = 10
s = -12345
integerValue = 1234567891
bigValue = 1234567891
veryBigValue = -123456789123456789
sillyBigPositiveValue = 12345678912345678912

Type                    Size(Bytes)
----                    -----------
char                    1
short                   2
int                     4
long                    4
long long               8
unsigned long long      8
*/

// What do you notice about the size of long and integer?
// int and long both have size of 4

/*
The size of variable sillyBigPositiveValue is 8
*/