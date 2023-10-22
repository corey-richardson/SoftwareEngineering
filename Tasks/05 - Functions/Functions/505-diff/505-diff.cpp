#include <iostream>
using namespace std;

//Function prototypes
int sub(int u, int v);
int absDiff(int a, int b);

int main()
{
    int var1, var2;

    //Prompt the user
    cout << "Enter value 1: ";
    cin >> var1;
    cout << endl << "Enter value 2: ";
    cin >> var2;


    int diff = absDiff(var1, var2);

    // print out the results
    cout << endl << "Absolute diff = " << diff << endl;
}

// Simple function to subtract
// return result is u-v
int sub(int u, int v)
{
    int y = u - v;
    return y;
}

int absDiff(int a, int b) {
    if (a > b) {
        return sub(a, b);
    }
    else {
        return sub(b, a);
    }
}