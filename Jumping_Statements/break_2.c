// While User Entered Odd Number the Prgram will End

#include <stdio.h>

int main()
{
    int a;

    while (1)
    {
        printf("Enter the Number : ");
        scanf("%d", &a);
        printf("%d\n", a);

        if (a % 2 != 0)
        {
            break;
        }
    }

    printf("program End ");

    return 0;
}