// Passing Structure to function

#include<stdio.h>
#include<string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

void printInfo(struct student s); // function prototype
// structure ke baad likhna hai kyoki compiler samaj nahi pata.

int main()
{
    struct student s1 = {"Dhananjay Thakur" , 1627 , 99.33};

    printInfo(s1);

    return 0;
}

void printInfo(struct student s){
    puts(s.name);
    printf("%d\n",s.roll);
    printf("%f",s.cgpa);

}
