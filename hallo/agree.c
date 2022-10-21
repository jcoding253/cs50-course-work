#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Do you agree my butt smells? ");

    if (c == 'y')
    {
        printf("Agreed.\n");
    }

    if (c == 'n')
    {
        printf("Disagreed.\n");
    }
}

