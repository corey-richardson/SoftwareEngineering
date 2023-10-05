#include <stdio.h>

int main()
{
    int i = 10;

    puts("Start while loop");

    /*
    while (i < 5)
    {
        printf("i = %d\n", i);
        i++;        // same as i = i + 1 but more concise;
    }
    */

    // Final value of i is 5 (when int i = 0)
    // If i is initialised as 6, the condition is never true and so
    // the loop never runs.

    // Modify the code to count down from 10 to 0 is steps of 2

    while (i >= 0) {
        printf("%d\n", i);
        i -= 2;
    }

    printf("Exiting with i=%d\n", i);
}

