#include <stdio.h>
int main()
{
    int age = 18;
    int *ptr = &age;

    printf("%d\n", age); // value of age

    printf("%d\n", *ptr); // value of age

    printf("%d\n", *(&age)); // value of age

    return 0;
}