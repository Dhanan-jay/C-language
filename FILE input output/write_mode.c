#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("createwithWriteMode.c", "w");
    // when file was not exist . The file is created automatically in write mode.

    if (fptr == NULL)
    {
        printf("File doen't exist");
    }
    else
    {
        printf("File is exists");
        fclose(fptr);
    }
    return 0;
}