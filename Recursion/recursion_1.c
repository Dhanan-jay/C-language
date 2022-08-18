// A function call itself again an again is called Recursion.

#include <stdio.h>

void print(int count);

int main()
{
    int a;

    printf("Enter the Number : ");
    scanf("%d", &a);

    print(a);

    return 0;
}

//Recursive Function
void print(int count)
{

    if (count == 0)
    {
        return;
    }

    printf("Hello World I am Dhananjay\n");

    print(count - 1);
}