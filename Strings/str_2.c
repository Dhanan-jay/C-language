#include<stdio.h>
int main()
{
    char name[30];

    printf("Enter Your Name : ");
    
    scanf("%s",name);   //scanf does not capable to store multiword with spaces.
    printf("Your Name is : %s",name);

    return 0;
}