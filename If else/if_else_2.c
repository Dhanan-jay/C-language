//Find Greater in two numbers ?

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the First number  : ");
    scanf("%d", &a);
    printf("Enter the Second Number : ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("Greater is : %d", a);
    }
    else
    {
        printf("Greater is : %d", b);
    }

    return 0;
}