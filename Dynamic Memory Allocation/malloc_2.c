// malloc() ==> memory allocation
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int)); // malloc

    // takes number of bytes to be allocated and returns a pointer of type void but we can typecast.

    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3] = 40;
    ptr[4] = 50;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }
    return 0;
}