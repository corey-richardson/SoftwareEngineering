#include <stdio.h>

int main()
{
    float fFractional = 0.123;
    printf("fFractional = %f\n", fFractional); // 0.123000

    //To 6 decimal places
    printf("fFractional (6dp) = %.6f\n", fFractional); // 0.123000

    //Let's try 9 decimal places 
    fFractional = 0.123456789;
    printf("fFractional = %.9f\n", fFractional); // 0.1234567_91, accurate to 7dp out of 9 requested

    // float can hold up to 7 decimal digits accurately while double can hold up to 15.

    //Compare with double
    double dfFractional = 0.123456789;
    printf("dfFractional = %.9f\n", dfFractional); // 0.123456789

    //Push double further into the smaller fractions (18 decimal places)
    dfFractional = 0.123456789123456789;
    printf("dfFractional = %.18f\n", dfFractional); // 0.12345678912345678_4

    //Push double further into the large numbers (9 decimal places)
    dfFractional = 10000000000.123456789;
    printf("dfFractional = %.9f\n", dfFractional); // dfFractional = 10000000000.123456_955

    //Caluclations
    double x = 1.234;
    printf("x = %f\n", x); // 1.234000

    //Multiply
    x = x * 10.0;
    printf("x = %f\n", x); // 12.340000, still displays to 6dp.

    //Divide
    x = x / 0.0;      //Error!!!!????, 'inf'
    printf("x = %f\n", x);

}


// Both float and double have finite precision. We saw that the value 0.123456789 was not stored in a float without error.