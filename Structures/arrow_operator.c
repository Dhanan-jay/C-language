// Arrow Operator
#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main()
{
    struct student s1 = {"Dhananjay" , 1627 , 98.765};

    struct student *ptr = &s1;      // pointer to structure

    printf("%s\n" , ptr->name);     // accessing using arrow operator
    printf("%d\n" , ptr->roll);
    printf("%f" , ptr->cgpa);
    return 0;
}