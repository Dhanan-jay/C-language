#include <stdio.h>
void printNum(int arr[], int n);

int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8};

    printNum(arr, 5);
    return 0;
}
void printNum(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d is : %d\n", i, arr[i]);
    }
}
