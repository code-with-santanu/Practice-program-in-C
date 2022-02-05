#include <stdio.h>

// int swap(int a, int b)
// {
//     int s;
//     s = a;
//     a = b;
//     b = s;
//     return a, b;
//     // return b;
// }
int main()
{
    int a, b, s;
    printf("\nEnter the value of a and b: ");
    scanf("\n%d\t%d", &a, &b);
    s = a;
    a = b;
    b = s;
    // a = swap(a, b);
    // b = swap(a, b);
    printf("\nThe numbers after swap are: %d,%d", a, b);

    return 0;
}