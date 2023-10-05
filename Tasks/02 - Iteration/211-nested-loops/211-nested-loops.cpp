#include <stdio.h>

int main()
{
    // Outer loop 
    for (int i = 1; i <= 2; i++)        // Outer loop executes twice
    {
        printf("Outer loop number %d\n", i);

        // Inner loop
        for (int j = 1; j <= 5; j++)    // Inner loop executes 5 times for each outer loop run so 10 time in total
        {
            printf("\tInner loop number %d\n", j);  // note the use of the tab (\t) option at the start to improve the layout
            
            //Task - Write another level of nesting here

        }
    }

    printf("\n\n\n");

    // In your project, add a further nested loop that increments a loop variable k from 1 to 3. 
    // Within this loop display values for i, j and k

    for (int i = 1; i < 4; i++) {
        printf("Outer loop number %d\n", i);
        for (int j = 1; j < 4; j++) {
            printf("\tInner loop number %d\n", j);
            printf("\t\ti,j,k\n"); // column headers
            for (int k = 1; k < 4; k++) {
                printf("\t\t%d,%d,%d\n", i, j, k);
            }
        }
    }

    printf("\n\n\n");

    for (int numOne = 1; numOne <= 12; numOne++) {
        printf("(%d)\n", numOne);
        for (int numTwo = 1; numTwo <= 12; numTwo++) {
            printf("\t%d x %d = %d\n", numTwo, numOne, numOne * numTwo);
        }
    }
}

// j can't be seen from line 8 as it is out of the range of scope