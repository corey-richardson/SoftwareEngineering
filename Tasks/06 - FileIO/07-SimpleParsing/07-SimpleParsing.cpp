// open4write.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void createFile(string fn);

int main()
{
    // Test file
    createFile("myfile.txt");


    // (i) Open for write
    string fn = "myfile.txt";
    ifstream inputStream;
    inputStream.open(fn);
    if (!inputStream.is_open()) {
        cerr << "Cannot open file " << fn << endl;
        return -1;
    }

    /*
    Hello COMP1000
    --------------
    Subject Area: COMP
    Module ID: 1000
    */

    // (ii) Read word-by-word (separated by spaces)
    string nextWord;
    for (unsigned int n = 0; n < 5; n++) {
        inputStream >> nextWord;
    }
    string subjectArea;
    inputStream >> subjectArea;

    // Display the result
    cout << "Subject Area is " << subjectArea << endl;

    //TO DO: 
    // Now find the module ID number
    // Store it in the integer variable code
    // Calculate the next value (code + 1)
    // Write out the new module string (correct answer is COMP1001).
    for (int i = 0; i < 2; i++) {
        inputStream >> nextWord;
    }
    int code;
    inputStream >> code;
    code++;

    // (iii) Close
    inputStream.close();

    // Display the result
    cout << "New Module Code is " << code << "\n\n";

    string moduleString = subjectArea + to_string(code);
    cout << "New Module String is " << moduleString << endl;

    // cout << "New module code will be " << subjectArea << code + 1 << endl;

    return 0;
}

void createFile(string fn)
{
    // (i) Open for write
    ofstream outputStream;
    outputStream.open(fn);
    if (!outputStream.is_open()) {
        cerr << "Cannot create file" << endl;
        throw std::runtime_error("Cannot create " + fn);
    }

    // (ii) Stream characters
    outputStream << "Hello COMP1000" << endl << "--------------" << endl;
    outputStream << "Subject Area: " << "COMP" << endl;
    outputStream << "Module ID: " << 1000 << endl;

    // (iii) Close
    outputStream.close();
}