#include <stdio.h>
#include <string.h>
int main()
{
    char oldString[] = "oldString";
    char newString[] = "newString";

    strcpy(newString, oldString); // It copies the value of old string into New string

    printf("%s", newString);

    return 0;
}