#include <stdio.h>

int main()
{
    puts("Press a letter or number, then press return");
    puts("Press q then return to quit");

    char userEnteredCharacter;
    char returnKey;

    do
    {
        userEnteredCharacter = getchar();   //ASCII character
        returnKey = getchar();              //Return key
        printf("You typed %c\n", userEnteredCharacter);
        printf("You also pressed return (ASCII %d)\n", returnKey);    //Uncomment this
        // ASCII 10

    } while (userEnteredCharacter != 'q' && userEnteredCharacter != 'Q');  //Repeat if condition is met - note the != operator
    // If userEnteredCharacter == 'q'
    // 0 1
    // This makes the condition false and so the loop breaks
    // De-Morgan's Theorem
    // !( (userEnteredCharacter == 'q') || (userEnteredCharacter == 'Q') )
    // --> 
    // (userEnteredCharacter != 'q') && (userEnteredCharacter != 'Q')

    puts("Finished");
}
