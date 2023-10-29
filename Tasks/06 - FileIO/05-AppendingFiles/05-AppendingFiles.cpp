#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // (i) Open for write
    ofstream outputStream;
    //outputStream.open("myfile.txt");
    outputStream.open("myfile.txt", ios::app); // a
    if (!outputStream.is_open()) {
        cerr << "Cannot create file" << endl;
        return -1;
    }

    // (ii) Stream characters
    outputStream << "Hello COMP2000" << endl << "--------------" << endl;
    outputStream << "Subject Area: " << "COMP" << endl;
    outputStream << "Module ID: " << 2000 << endl;

    // (iii) Close
    outputStream.close();

    return 0;
}

/*
ios::in	    Open file for input (default mode for ifstream)
ios::out	Open file for output (default mode for ofstream)
ios::binary	Open file in binary mode
ios::ate	Set initial file position at the end, if not set the initial file position is the start
ios::app	All output is appended to the end of the file
ios::trunc	If file is opened for output and already exists it's content is deleted before writing new data

You can combine these flags with the or operator |

outputStream.open("myfile.txt", ios::app | ios:binary );
*/