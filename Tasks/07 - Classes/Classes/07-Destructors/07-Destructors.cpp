#include <iostream>
#include "Rect.h"
using namespace COMP1000;

// Uncomment the line that reads //Rect r3(5.0f, 6.0f, "r3");
Rect r3(5.0f, 6.0f, "r3");

void demo() {
    Rect r0(3.0f, 10.0f,"r0");
    r0.display();
}

int main()
{
    //Using C++ class
    Rect r1(2.0, 3.0, "r1");
    r1.display();

    //Call demo - which creates a temporary Rect
    demo();

    return 0;
}

/*
Question	What causes the destructor to run for object r0? 
    r0 falls out of scope after the demo function finishes running and so is destructed


Question	What causes the destructor to run for object r1?
    r1 gets destructed at the end of runtime during clean-up
*/

/*
Question	Which breakpoint is reached first? ln6 and ln16
    ln6

Question	When the code exits, which object destructor ends last?
    r0, r1, r3
    r3 has global scope, so isn't destructed until AFTER r1 in main has been destructed
*/