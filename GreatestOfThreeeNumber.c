#include <stdio.h>

float MaxNumber(float, float, float);

float MaxNumber(float a, float b, float c)
{
    if (a > b)
    {
        if (a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else if (a < b)
    {
        if (b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if (b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}

int main()
{
    float a, b, c, max;
    printf("\nEnter the value of three nos: ");
    scanf("\n%f\t%f\t%f", &a, &b, &c);

    max = MaxNumber(a, b, c);
    printf("\nThe max no is: %f", max);

    return 0;
}