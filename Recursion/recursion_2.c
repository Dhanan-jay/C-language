#include <stdio.h>

int fact(int n);

int main()
{
    int a;
    printf("Enter the Number : ");
    scanf("%d", &a);

    printf("The Factorial is : %d ", fact(a));
    return 0;
}
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return (n * fact(n - 1));
    }
}