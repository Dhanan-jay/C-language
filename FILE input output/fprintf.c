#include<stdio.h>
int main()
{
    FILE *fptr;

    fptr = fopen("hello2.txt","w");

    fprintf(fptr , "%c" , 'C');
    fprintf(fptr , "%c" , 'O');
    fprintf(fptr , "%c" , 'D');
    fprintf(fptr , "%c" , 'E');

    fclose(fptr);
    return 0;
}