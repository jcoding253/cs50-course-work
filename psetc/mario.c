#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // row of question marks
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        printf("?");
    }

    // column of $'s
    printf("\n\n");
    for (int i = 0; i < 2; i++)
    {
        printf("$\n");
    }

    // constant 3x3 blocks
    printf("\n");
    const int n = 3;
    for (int c = 0; c < n; c++)
    {
        for (int r = 0; r < n; r++)
        {
            printf("#");
        }
        printf("\n");
    }

    // get size of grid, conditional loop
    printf("\n");
    int s;
    do
    {
        s = get_int("Size: ");
    }
    while (s < 1);

    // print previous grid with stars
    printf("\n");
    for (int c = 0; c < s; c++)
    {
        for (int r = 0; r < s; r++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
}