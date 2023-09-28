#include <stdio.h>

int main()
{
    //Create a variable x
    int x = 0;

    //Prompt user
    printf("Enter your age\n");

    //Read keyboard response - look for an integer
    int found = scanf_s("%d", &x);

    // Value gets saved into the memory address of 'x'
    // 'found' is the number of matches found, success/fail indicator

    //Display how many items were matched
    printf("Matched %d items\n", found);

    //Display what was typed in
    printf("x = %d\n", x);

    // Modify the code to read in an additional number and display it on the screen
    int y = 0;
    printf("Another:\n");
    int found_y = scanf_s("%d", &y);
    printf("x = %d\n", y);

    // Now write some code to calculate the average of the two values entered, 
    // then display the result on the screen
    double avg = (float)(x + y) / 2;
    printf("avg = %f\n", avg);
}


