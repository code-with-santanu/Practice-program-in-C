/* WAP to find the reverse of a number */

#include <stdio.h>

int reverse(int n)
{
    int r = 0;
    while (n > 0)
    {
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r;
}

int main()
{
    int n, r;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    r = reverse(n);

    printf("\nReverse = %d", r);

    return 0;
}