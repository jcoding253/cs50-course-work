#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int N = 7;
int y == N;


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
    for (int i = 0; i < 6; i++)
    {
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found\n");
        }
    }
    printf("Not found\n");
}