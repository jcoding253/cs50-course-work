#include <cs50.h>
#include <stdio.h>

const int Y = 3;
float Z (int A, int B[]);

int main(void)
{
    int X[Y];
    for (int i = 0; i < Y; i++)
    {
        X[i] = get_int("Score: ");
    }
    printf("Average: %f\n", Z(Y, X));
}

float Z (int A, int B[])
{
    int sum = 0;
    for (int i = 0; i < A; i++)
    {
        sum += B[i];
    }
    return sum / (float) A;
}

