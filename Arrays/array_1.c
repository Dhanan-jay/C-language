// take input from user and print the value ?

#include <stdio.h>
int main()
{
    int n[5];       // one dimensional array

    for (int i = 0; i < 5; i++)
    {
        printf("%d index : ", i);
        scanf("%d", &n[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d index value is : %d\n", i, n[i]);
    }
    return 0;
}