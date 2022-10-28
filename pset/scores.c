#include <cs50.h>
#include <stdio.h>

const int Y = 3;
float average (int A[]);

int main(void)
{
    int score[Y];
    for (int i = 0; i < Y; i++)
    {
        score[i] = get_int("Score: ");
    {

    printf("Average: %f\n", average);
{

float average (int A[])
{
    int sum = 0;
    for (int i = 0, i < Y, i++)
    {
        sum += A[i];
    }
    return sum / (float) Y;
}