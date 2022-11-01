#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    //algorithm for string search
    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    string s = get_string("String: ");
    for (int i = 0; i < 6; i++)
    {
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found\n");
            return 3;
        }
    }
    printf("Not found\n");
    

    //algorithim for number search
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    int n = get_int("Number: ");
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 2;
        }
    }
    printf("Not found\n");
    return 1;
}
