// Write a Program to find Even or odd

#include <stdio.h>

int main()
{
    int a;

    printf("Enter the Number : ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf(" %d is Even number ", a);
    }
    else
    {
        printf(" %d is Odd number ", a);
    }
    return 0;
}