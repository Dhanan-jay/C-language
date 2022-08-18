#include<stdio.h>

int main()
{
    int age = 18;
    int *ptr = &age;

    printf("%u\n",&age); // address of age

    printf("%u\n",ptr); // value of ptr

    printf("%u\n",&ptr); // address of ptr

    return 0;
}