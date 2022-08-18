// print Hello world using loop

#include<stdio.h>

int main()
{
    int a;

    printf("Enter the Number : ");
    scanf("%d",&a);

    for( int i=0 ; i <= a ; i++){
        printf("Hello World \t");
    }

    return 0;
}