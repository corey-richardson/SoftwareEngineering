#include <stdio.h>

int main()
{
    int i = 0;
    // If i is changed to 6 then the loop will run only once.
    // A do-while loop will always run at least once irrespective of the
    // condition.

    printf("Start while loop\n");

    do
    {
        printf("i = %d\n", i);
        i = i + 1;              // Alternatively, write i++;
    } while (i < 5);            //Repeat if condition is met

    printf("Finished: i = %d\n", i);
}


