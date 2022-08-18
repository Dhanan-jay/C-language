// Loop inside loop is called nested loop

#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            printf("Hello %d \n", i);
        }
    }

    return 0;
}