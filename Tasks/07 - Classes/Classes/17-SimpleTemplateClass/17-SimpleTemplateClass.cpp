// 17-SimpleTemplateClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include "Point.h"
#include "Point2.h"

using namespace std;

int main() {
    cout << std::fixed;
    // Change the type of p1 to Point2<int> and p2 to Point2<float>
    
    // First - a pair of integers
    // Point p1(4, 5);
    Point2<int> p1(4, 5);
    p1.display();
    cout << p1.max() << endl;

    //Now, let's consider a pair of floats
    // Point p2(4.0f, 4.5f);
    Point2<float> p2(4.0f, 4.5f);
    p2.display();
    cout << p2.max() << endl;

}

/*
// Return the max of x and y
int max() {
    if (x >= y) {
        return x;
    }
     else {
        return y;
    }
}

-->
    
// Return the max of x and y
DataType max() {
    if (x >= y) {
        return x;
    }
    else {
        return y;
    }
}
   
The two floating point values 4.0f and 4.5f are not integers, 
so they are automatically converted by rounding.
This results in p2.max() returning a value of 4 which is very misleading

Implicit type conversion like this is usually best avoided for these very reasons.

*/