

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));

    printf("Enter the 5 Number : \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d is %d\n", i, ptr[i]);
    }

    ptr = realloc(ptr, 8);      // using realloc

    printf("Enter 8 Number : \n");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%d is %d\n", i, ptr[i]);
    }
    free(ptr);
    return 0;
}