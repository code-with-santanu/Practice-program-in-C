/* WAP to find the factorial of a given number */

#include <stdio.h>

int fact(int n);

int fact(int n)
{
    int fact = 1, i;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n, f;
    printf("\nEnter a number: ");
    scanf("%d", &n);

    f = fact(n);
    printf("\nThe factorial of the given no is: %d", f);

    return 0;
}