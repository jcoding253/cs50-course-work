#include <stdio.h>
#include <cs50.h>

void draw(int n);

int main(void)
{
    draw (1);
}

void draw(int n)
{
    draw(n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}