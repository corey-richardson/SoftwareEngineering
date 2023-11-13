#include <iostream>
#include "StudentRecord.h"
using namespace std;

int main()
{
    cout << "Challenge 1\n";
    StudentRecord student1("Monty", "Python", 12345);
    student1.display();
    
    //Test remaining member functions here
    student1.updateFirstName("King");
    student1.display();

    student1.updateLastName("Arthur");
    student1.display();

    cout << "Full Name: " << student1.getFullName();

}
