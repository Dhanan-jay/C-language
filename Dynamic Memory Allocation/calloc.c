// WAP to allocate memory of size n , where n is entered by the user ?
// calloc() == > continuous allocation
// it is very similar to malloc()
// by default all values initialize with 0

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);

    ptr = (int *)calloc(5, sizeof(int)); // using calloc

    for (int i = 0; i < n; i++)
    {
        printf("Enter the [%d]index value : ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value [%d]index is : %d\n", i, ptr[i]);
    }

    free(ptr);

    ptr = (int *)calloc(2, sizeof(int));

    for (int i = 0; i < 2; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}