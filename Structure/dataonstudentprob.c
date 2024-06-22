#include <stdio.h>
#include <string.h>
typedef struct student
{
    int rollnumber;
    char name[20];
    char department[20];
    char course[20];
    char year[5];
} student;

void check(student x, student y)
{
    int result = strcmp(x.department, y.department);

    if (result == 0)
        printf("Both are belonging to same Department");
    else
        printf("They are from different Departments");
    return;
}
int main()
{
    student a, b;

    strcpy(a.name, "Vivek Yadav");
    a.rollnumber = 171;
    strcpy(a.year, "First year");
    strcpy(a.course, "B.Tech");
    strcpy(a.department, "CSE");

    strcpy(b.name, "Vivek Bhavel");
    b.rollnumber = 169;
    strcpy(b.year, "First year");
    strcpy(b.course, "B.Tech");
    strcpy(b.department, "CS(DS)");

    check(a, b);

    return 0;
}