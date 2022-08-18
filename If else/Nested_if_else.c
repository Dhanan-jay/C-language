#include <stdio.h>

int main()
{
    int a;

    printf("Enter the number  : ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d is Even number ", a);

        if (a % 4 == 0)
        {
            printf("and divisible by 4");
        }
        else
        {
            printf("and not divisible by 4");
        }
    }
    else
    {
        printf("%d is Odd number ", a);

        if (a % 3 == 0)
        {
            printf("and divisible by 3");
        }
        else
        {
            printf("and not divisible by 3");
        }
    }

    return 0;
}