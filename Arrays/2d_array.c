#include <stdio.h>
int main()
{
    int arr[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter [%d] [%d] index : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            printf("The Number of [%d] [%d] index : %d\n", i, j, arr[i][j]);
        }
    }

    return 0;
}