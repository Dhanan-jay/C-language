// take input from user and print the value using pointer ?

#include <stdio.h>
int main()
{
    int i[5];
    int *ptr = &i[0];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d index : ", i);
        scanf("%d", (ptr + i));
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d index value is : %d\n", i, *(ptr + i));
    }
    return 0;
}
