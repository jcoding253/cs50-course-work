#include <cs50.h>
#include <stdio.h>

int get_size(void);
void print_grid(int s);

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

    //see abstractions below for making grids
    int s = get_size();
    print_grid(s);
    
    printf("\n");
}





//abstraction for get_size
// get size of grid, conditional loop
int get_size(void)
{
    printf("\n");
    int s;
    do
    {
        s = get_int("Size: ");
    }
    while (s < 1);
    return s;
}

//abstraction for printing
// print previous grid with stars
void print_grid(int s)
{
    printf("\n");
    for (int c = 0; c < s; c++)
    {
        for (int r = 0; r < s; r++)
        {
            printf("*");
        }
        printf("\n");
    }
}