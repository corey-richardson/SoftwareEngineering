#include <iostream>
using namespace std;
#include "Rect_t.h" //C   Version
#include "Rect.h"   //C++ Version

int main()
{
    //Using C structures
    Rect_t r1 = CreateRect(2.0, 3.0);
    display(r1);

    setHeight(r1, 10.0f);
    // r1.height = 10.0;
    // The compiler cannot stop us doing this with structures. 
    // However, with a class we can control access.

    display(r1);

    //Using C++ class
    Rect r2(2.0, 3.0);
    r2.display();

    r2.setHeight(10.0f);
    // r2.height = 10.0; 
    // 'Rect::height': cannot access private member declared in class 'Rect'
    // This error occurs because the member variable height cannot be accessed outside of the class. 
    // This rule is enforced by the compiler.


    r2.display();
}

