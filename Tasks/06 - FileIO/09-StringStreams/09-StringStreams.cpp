// 09-StringStreams.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
using namespace std;


// while not end of file
//  read word
//  inc counter

int main()
{
    //Create two strings.
    string nextWord;

    //Note how a long string can be broken over several lines to aid writing. Note the \ character never features in the string.
    string sentence = "May the force be with you. " \
                      "Always. Ok, maybe that's asking too much. " \
                      "How about 3 days-a-week with time off for birthdays?";

    //Write the complete string to the the terminal
    cout << sentence << "\n\n";

    //Read first word (words are separated by spaces or newlines)
    istringstream iss(sentence);

    int wordCounter = 0;

    while (!iss.eof()) {
        iss >> nextWord;

        //Was a word actually read?
        // guard clause
        if (iss.fail()) {
            continue; // try again, better luck next time
        }

        // We have a valid word - so display it
        cout << nextWord << endl;
        wordCounter++;
    }

    cout << "\nWord Counter: " << wordCounter << endl;
    return 0;

}

