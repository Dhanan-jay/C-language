#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Hello.c", "r");// when file was not exist null is store in read mode.

    if (fptr == NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is exist");
        fclose(fptr);
    }
    return 0;
}