// Take input name from the user using gets and puts ? 

#include<stdio.h>
int main()
{
    char name[100];

    printf("Enter Your Name : ");
    fgets(name , 100 , stdin);  // same as gets
    puts(name);

    return 0;
}