#include <stdio.h>
int main()
{
    int n, first = 0, second = 1, next, c;
    printf("Enter the number of terms :");
    scanf("%d", &n);
    printf("First %d terms of fibonacci series :\n", n);
    for (c = 0; c < n; c++)
    {
        if (c <= 1)
            next = c;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("Fibonacci number %d is %d\n", c, next);
    }
}