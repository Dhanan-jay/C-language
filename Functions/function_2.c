#include <stdio.h>

        // a & b are parameters
int sum(int a, int b);   //funtion prototype

int main()
{
    int a, b;

    printf("Enter the First Number  : ");
    scanf("%d", &a);
    printf("Enter the Second Number : ");
    scanf("%d", &b);

    int s = sum(a, b);      //funtion call

    printf("The Sum is : %d", s);

    return 0;
}

int sum(int x, int b)       //funtion defination
{
    return x + b;       //return value
}