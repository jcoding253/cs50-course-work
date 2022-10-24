#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //calculate with big integers
    long x = get_long("What's x? ");
    long y = get_long("What's y? ");
    printf("%li\n", x + y);

    //calculate with decimals
    float a = get_float("What's a? ");
    float b = get_float("What's b? ");
    printf("%f\n", a / b);
}