#include <stdio.h>

int main()
{
    int marks;

    printf("Enter Your Marks : ");
    scanf("%d", &marks);

    if (marks >= 70)
    {
        printf("A Grade");
    }
    else if (marks >= 50)
    {
        printf("B Grade");
    }
    else if (marks >= 33)
    {
        printf("C Grade");
    }
    else
    {
        printf("!! Fail !!");
    }

    return 0;
}