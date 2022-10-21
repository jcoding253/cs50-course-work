#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Do you agree my butt smells? ");

    if (c == 'y')
    {
        printf("Agreed.\n");
    }

    else if (c == 'Y')
    {
        printf("Agreed.\n");
    }

    else if (c == 'n')
    {
        printf("Disagreed.\n");
    }

    else if (c == 'N')
    {
        printf("Disagreed.\n");
    }
}

