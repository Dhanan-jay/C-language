#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int a = 10, b = 20;

    printf("Before Swapping the Value in main() : a = %d & b = %d \n\n", a, b);
    swap(&a,&b);

    printf("After Swapping the Value in main() :  a = %d & b = %d \n\n", a, b);
    return 0;
}
void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

    printf("Swapping the value in Functoin Body : a = %d & b = %d \n\n", *a, *b);
}