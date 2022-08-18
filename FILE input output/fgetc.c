// fgetc() = is used for reading a character from the file.

#include <stdio.h>
int main()
{
    FILE *fptr;
    
    fptr = fopen("hello.txt" , "r");

    printf("%c" , fgetc(fptr));
    printf("%c" , fgetc(fptr));
    printf("%c" , fgetc(fptr));
    printf("%c" , fgetc(fptr));

    fclose(fptr);
    return 0;
}