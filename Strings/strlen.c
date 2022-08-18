#include <stdio.h>
#include <string.h> // header file

int main()
{
    char name[] = "Dhananjay Thakur";

    int length = strlen(name); // strlen() = count the number of character in strings.

    printf("The Length is : %d ", length);

    return 0;
}