// String Concatenation .
#include <stdio.h>
#include <string.h>
int main()
{
    char firstStr[100] = "Hello ";
    char secStr[] = "World";

    strcat(firstStr, secStr); // Concatenate first string with Second string    .......second string ko first string k sath add kar dega.

    printf("%s", firstStr);

    return 0;
}