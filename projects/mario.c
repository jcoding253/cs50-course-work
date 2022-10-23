#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("\n");

    for (int i = 0; i < 4; i++)
    {
        printf("?");
    }

    printf("\n\n");

    for (int b = 0; b < 3; b++)
    {
        printf("#\n");
    }

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

    printf("\n");

}
