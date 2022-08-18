#include <stdio.h>

int main()
{
    int a;
    printf("Enter the Number between 1 to 4 \n");
    scanf("%d", &a);

    switch (a)
    {
    case 3:
        printf("3");
        break;

    case 2:
        printf("2");
        break;

    case 1:
        printf("1");
        break;

    case 4:
        printf("4");
        break;

    default:
        printf("!! Invalied Number !!");
        break;
    }

    return 0;
}