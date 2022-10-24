#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //calculate with big integers
    long x = get_long("What's x? ");
    long y = get_long("What's y? ");

    printf("%li\n", x + y);

    //calculate with decimals
    float x = get_float("What's x? ");
    float y = get_float("What's y? ");

    printf("%f\n", x / y);
}