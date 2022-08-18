#include <stdio.h>

void swap(int a, int b);

int main()
{
    int a = 10, b = 20;

    printf("\n\nBefore Swapping the value of a = %d & b = %d in main()\n\n", a, b);

    swap(a, b);

    printf("After Swapping the value of a = %d & b = %d in main()\n\n", a, b);

    return 0;
}
void swap(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("Swapping the value of a = %d & b = %d in Function Body\n\n", a, b);
}