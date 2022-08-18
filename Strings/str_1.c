// print firstname & lastname using loop charater by character '%c'?

#include <stdio.h>
void printString(char arr[]);
int main()
{
    char firstName[] = {'D', 'H', 'A', 'N', 'A', 'N', 'J', 'A', 'Y','\0'};  // string 

    char lastName[] = "Thakur";

    printString(firstName);
    printString(lastName);

    return 0;
}
void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}
