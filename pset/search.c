#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int N = 7;
int y = N;

const int S = 6;
int z = S;

int main(void)
{
    //algorithim for number search
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    int n = get_int("Number: ");
    for (int i = 0; i < N; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found\n");
        }
        else
        {
            y--;
        }
        if (y == 0)
        {
            printf("Not found \n");
        }
    }


    //algorithm for string search
    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    string s = get_string("String: ");
    for (int i = 0; i < S; i++)
    {
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found\n");
        }
        else
        {
            z--;
        }
        if (z == 0)
        {
            printf("Not found \n");
        }
    }

    if (y = 0, z = 0)
    return 0;
    if (y = 0, z = 1)
    return 1;
    if (y = 1, z = 0)
    return 2;
    if (y = 1, z = 1)
    return 3;


}