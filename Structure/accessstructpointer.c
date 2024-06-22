// Accessing Structure variable using Pointers //
#include <stdio.h>
#include <string.h>
typedef struct person
{
    int age;
    float weight ;
} person;

int main(){
    person p1;
    person* x = &p1;
    p1.age=27;
    p1.weight=68;
    (*x).age= 29;  // isme bracket lagana jaruri hai//
    (*x).weight = 62;
    printf("%d",p1.age);

    return 0;
}
