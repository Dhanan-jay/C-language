#include <stdio.h>
#include <string.h>

// typedef keyword is used to create alias(nickname) for structure.

typedef struct BachlorOfComputerApplication
{
    char name[100];
    int roll;
    float cgpa;
} BCA;          // BCA is the nickname

int main()
{
    BCA s1 = {"Dhananjay Thakur", 1627, 89.9999}; // typedef keyword is used.
    printf("%s", s1.name);
    return 0;
}