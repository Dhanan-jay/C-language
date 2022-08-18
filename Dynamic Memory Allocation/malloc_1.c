// malloc() ==> memory allocation

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(5));

    for (int i = 1; i <= 5; i++)
    {
        printf("Enter the [%d]index value : ", i);
        scanf("%d", &ptr[i]);
    }
    
    printf("\n");

    for (int i = 1; i <= 5; i++)
    {
        printf("The value of [%d]index is : %d\n", i, ptr[i]);
    }
    return 0;
}