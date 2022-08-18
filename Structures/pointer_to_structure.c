// Pointer to Structure
#include<stdio.h>
#include<string.h>
struct student
{
    char name[100];
    int roll;
    float cgpa;
};
int main()
{
    struct student s1 = {"Dhananjay Thakur" , 1627 , 78.76};

    struct student *ptr = &s1;      // pointer structure

    printf("%s\n" , (*ptr).name);   // accesing value

    return 0;
}
