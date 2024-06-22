#include<stdio.h>
#include<string.h>
int main(){
    struct Person{
        char name[50];
        float salary;
        int age;
    }first,second;
    
    strcpy(first.name,"Vivek");
    first.salary = 94500.500;
    first.age = 28;

    strcpy(second.name,"Vikash");
    second.salary = 194500.500;
    second.age = 26;

    printf("%s\n",first.name);
    printf("%d\n",second.age);

    return 0;
}