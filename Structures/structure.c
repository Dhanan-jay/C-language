#include <stdio.h>
#include <string.h>

// It is a User Define
struct student
{
    int rollNo;
    float marks;
    char name[100];
};

int main()
{
    struct student s1;      // structure declare 

    s1.rollNo = 1627;       // initialized
    s1.marks = 73.1;
    // s1.name = "Dhananjay Thakur";    
    // wrong because it is array notation. Array notation can not be initialized directly.

    strcpy(s1.name,"Dhananjay Thakur"); // so we use this

    printf("%15d\n", s1.rollNo);
    printf("%f\n", s1.marks);
    puts(s1.name);

    return 0;
}