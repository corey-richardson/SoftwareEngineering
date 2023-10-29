#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    //Write to stdout
    cout << "12345" << endl;
    cout << "-----";

    //Now the file equivalent.

    // First open the file for write (use type ofstream)
    ofstream outputStream;
    outputStream.open("myfile.txt");

    // Check to see if it worked
    if (outputStream.is_open() == false) {
        // It is possible to redirect cerr so the user does not see it. 
        // This won't be done in this lab, but be aware this is possible
        cerr << "Cannot create the file" << endl;
        return -1;
    }

    // Write a string to the file - instead of cout, it's `outputStream`
    outputStream << "12345" << endl;
    outputStream << "-----" << endl;

    // Close
    outputStream.close();
}
