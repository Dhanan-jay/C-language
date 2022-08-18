// fscanf() = is used for reading a character from the file.

#include <stdio.h>
int main()
{
    FILE *fptr;
    char ch;

    fptr = fopen("hello.txt", "r");
    
    fscanf(fptr, "%c", &ch);
     // file    format   address
     //poiner  specifier
    printf("%c\n", ch);

    fscanf(fptr, "%c", &ch);
    printf("%c\n", ch);

    fscanf(fptr, "%c", &ch);
    printf("%c\n", ch);

    fscanf(fptr, "%c", &ch);
    printf("%c", ch);

    fclose(fptr);

    return 0;
}