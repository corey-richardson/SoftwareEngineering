#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    // Challenge 1 - "Web Scraping"
    // Find the quoted number that follows the title attribute
    string input =
        "<HTML>\n" \
        "  <BODY>\n" \
        "    <P>Welcome to COMP1000</P>\n" \
        "    <BR>\n" \
        "    <P><a title=\"42\">Hover over here to see a special number</a></P>\n"
        "  </BODY>\n" \
        "</HTML>\n";

    cout << input << endl;

    //Write solution here
    size_t loc = input.find("title=\"");
    string strNum = input.substr(loc+7, 2);
    int num = stoi(strNum);
    cout << typeid(num).name() << " " << num << endl;



    // Challenge 2 - word count
    // Type in a sentence, and count the number of time the words "the" appears 
    getline(std::cin, input);   //Read a line (users types this in)
    istringstream iss(input);   //Create a string "stream" (sequence of words)
    string word;                //This will hold the next word
    int theCounter = 0;
    while (iss >> word) {       //Read the next word (if there is one)
        cout << word << endl;   //Output each word in turn
        if (word == "the") {
            theCounter++;
        }
    }
    cout << "'the' appeared " << theCounter << " time/s." << endl;

    // Challenge 3 - reverse an array
    const int LENGTH = 5;
    int nums[] = { 1, 3, 5, 7, 9 };
    
    for (int i = 0; i < LENGTH; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;
    int temp;
    for (int i = 0; i < LENGTH / 2; i++) {
        temp = nums[LENGTH - 1 - i];
        nums[LENGTH - 1 - i] = nums[i];
        nums[i] = temp;
    }

    for (int i = 0; i < LENGTH; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;



}

