#include <iostream>
#include <sstream>
#include <fstream>
#include <stdexcept>
#include <regex>
using namespace std;

//Used to create a file for testing purposes
void createFile(string fn);
int readFileIntoString(string fn, string& allLines);

int main()
{
    // Let's create a file for test purposes
    createFile("myfile.txt");

    // String to hold file content
    string dataString;
    int errCode = readFileIntoString("myfile.txt", dataString);

    // If successful, display contents
    if (errCode != 0) {
        cerr << "Error: " << errCode << endl;
        return errCode;
    }

    //Display
    cout << dataString << endl;

    // -----------------------------------------------------------
    // What we are searching for                            RegEx
    // -----------------------------------------------------------
    // The literal string Module                            Module
    // Any number of space characters                       \\s*
    // The string ID:                                       ID:
    // Any number of space characters                       \\s*
    // A numerical value with 1 or more digits              \\d+
    //  
    // Huge thanks to https://regex101.com/ for making this so easy (easy being a relative term of course)

    regex  pattern("Module\\s*(ID):\\s*(\\d+)");
    smatch match;
    string tag;
    string strCode;
    int code;

    //look for the pair "ID:" and <module number>
    if (regex_search(dataString, match, pattern)) {
        cout << "Full Match:" << match[0] << endl;
        if (match.size() >= 3) {
            tag = match[1];
            strCode = match[2];
            cout << "Pair found: (" << tag << ", " << strCode << ")" << endl;
            
            //The regex search found a number, so we can convert it with some confidence
            // However, I am writing defensively :)
            try {
                code = stoi(strCode);
                cout << "New Module ID: " << code + 1 << endl;
            }
            catch (exception e)
            {
                cerr << "Could not convert " << strCode << " to an integer." << endl;
                return -1;
            }
            

            //dataString = match.suffix().str();    //Move past the match
        }
    }
    else {
        cout << "Oops - could not find it" << endl;
    }

    // Look for "Subject Area:" and <subject area>
    pattern = "\\s*(Subject\\s*Area):\\s*(\\w+)\\s*";
    if (regex_search(dataString, match, pattern)) {
        cout << "Full Match:" << match[0] << endl;
        if (match.size() >= 3) {
            tag = match[1];
            strCode = match[2];
            cout << "Pair found: (" << tag << ", " << strCode << ")" << endl;

            cout << tag << " is '" << strCode << "'" << endl;
        }
    }
    else
    {
        cerr << "Not found";
        return -1;
    }

    // Done
    cout << "All is well!" << endl;
    return 0;
}

// Create a test file with filename fn
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
    //We've switched to back to regular numerals - as discussed by the water cooler
    outputStream << "Module ID: " << "1000" << endl;

    // (iii) Close
    outputStream.close();
}

// Read the test file into a string
int readFileIntoString(string fn, string& allLines)
{
    // (i) Open for read
    ifstream inputStream;
    inputStream.open(fn);
    if (!inputStream.is_open()) {
        cerr << "Cannot open file " << fn << endl;
        return -1;
    }

    // (ii) Read line-by-line (separated by newline)
    string nextLine;    //String to hold each line
    allLines = "";      //Reset to empty string

    //Use a loop to read all remaining lines
    do {
        //Read a line from the stream `inputString` into the string `nextLine`
        getline(inputStream, nextLine);

        //Did we successfully read a line?
        if (!inputStream.fail()) {
            //If so, append to the string `allLines` and add a newline character on the end
            allLines = allLines + nextLine + "\n";
        }
        //The last read MIGHT include an EOF character
    } while (!inputStream.eof());   //Loop condition is if we have NOT reached the end of the file

    // (iii) Close the file
    inputStream.close();

    return 0;
}

