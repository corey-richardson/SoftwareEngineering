// lookingatmemory.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*
address 
- this is an integer value, and it represents the location of the data in the computer memory. 
- In C and C++, it is always an integer value.

value 
- this is the data itself. This is what is stored in the memory at a given address.
*/

#include <iostream>

int main()
{
    unsigned int myVariable;
    myVariable = 15;    // 000F in Hex, 0000000011111111 in binary
    
    printf("The value of myVariable is: %d\n", myVariable); // 15
    printf("The value of myVariable in base 16 (hex) is: %x\n", myVariable); // f

    printf("The address (in hex) of myVariable is %p\n", &myVariable); // 0000005FA6BDF914
    printf("Size of an integer is %d\n", sizeof(myVariable)); // 4
}


