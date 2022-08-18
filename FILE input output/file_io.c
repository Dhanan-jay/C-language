#include<stdio.h>
int main()
{
    FILE *fptr;

    fptr = fopen("hello.c","r");

    fclose(fptr);
    return 0;
}