// Initialization of Structure in C

#include<stdio.h>
#include<conio.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    // initializing structure in oneline
    
    struct student s1 = {"Dhananjay Thakur" , 1627 , 73.34};
    
    printf("%s\n",s1.name);
    printf("%d\n",s1.roll);
    printf("%f",s1.cgpa);

    return 0;
}