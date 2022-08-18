#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, choice;

    printf("\n\t\t\tWhat Do You Want To Do\n");

    while (1)
    {

        printf(" 1.Addition\n 2.Substraction\n 3.Multiplication\n 4.Division\n 5.exit\n\n");

        printf("Enter Your Choice : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            printf("\n Addition : \n");

            printf("Enter the First Number  : ");
            scanf("%d", &a);
            printf("Enter the Second number : ");
            scanf("\n%d", &b);

            c = a + b;

            printf("Addition of %d + %d = %d\n\n", a, b, c);

            break;
        }

        case 2:
        {
            printf("\n Substraction : \n");

            printf("Enter the First Number  : ");
            scanf("%d", &a);
            printf("Enter the Second number : ");
            scanf("\n%d", &b);

            c = a - b;

            printf("Substraction of %d - %d = %d\n\n", a, b, c);

            break;
        }

        case 3:
        {
            printf("\n Multiplication : \n");

            printf("Enter the First Number  : ");
            scanf("%d", &a);
            printf("Enter the Second number : ");
            scanf("\n%d", &b);

            c = a * b;

            printf("Multiplication of %d x %d = %d\n\n", a, b, c);

            break;
        }

        case 4:
        {
            printf("\n Division : \n");

            printf("Enter the First Number  : ");
            scanf("%d", &a);
            printf("Enter the Second number : ");
            scanf("\n%d", &b);

            c = a / b;

            printf("Division of %d / %d = %d\n\n", a, b, c);

            break;
        }

        case 5:
        {
            exit(0);
        }

        default:
        {
            printf("! Invalied Number !\n\n");
        }
        }
        getch();
    }
    return 0;
}