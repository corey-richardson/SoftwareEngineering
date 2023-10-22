#include <iostream>
using namespace std;

// int L;		//This is not an ideal location - we will soon address this

void displayBanner(string message) {
	//Get the length of the string
	int L = message.length();

	//Write the banner above
	for (unsigned int n = 0; n < (L + 4); n++) {
		cout << "*";
	}
	cout << endl;

	cout << "* ";				//Leading *
	cout << message;			//Message
	cout << " *" << endl;		//Trailing *

	//Write the banner below
	for (unsigned int n = 0; n < (L + 4); n++) {
		cout << "*";
	}
	cout << endl;
}

int main() // global scope bad
{
	const string message = "Welcome to Computer Science but longer";
	displayBanner(message);
	
	

	//Tell the calling shell all is well
	return 0;
}