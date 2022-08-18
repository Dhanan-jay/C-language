// Array of Structure
#include <stdio.h>
#include <string.h>

struct student
{
    int rollNo;
    float cgpa;
    char name[100];
};

int main()
{
    struct student BCA[50]; // Array of structure Define.

    BCA[0].rollNo = 1627;
    BCA[0].cgpa = 75.343;
    strcpy(BCA[0].name, "Dhananjay Thakur");

    printf("%d\n", BCA[0].rollNo);
    printf("%f\n", BCA[0].cgpa);
    puts(BCA[0].name);
    

    // struct student BSC[50]; // Array of structure Define.

    // BSC[1].rollNo = 16297;
    // BSC[1].cgpa = 758.343;
    // strcpy(BSC[1].name, "spiderman");

    // printf("%d\n", BSC[1].rollNo);
    // printf("%f\n", BSC[1].cgpa);
    // puts(BSC[1].name);

    return 0;
}