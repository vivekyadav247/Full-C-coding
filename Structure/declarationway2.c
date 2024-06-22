#include<stdio.h>
int main(){
    struct students
    {
        int marks;
        float prcnt;
        char grade;
    } vivek,vikash;
    
    vivek.marks = 92; // Dot(.) se ise access karte hai//
    vivek.prcnt = 94.5;
    vivek.grade = 'A';
             
    printf("%f ",vivek.prcnt);

    vikash.grade = 'A';
    vikash.marks = 99;
    vikash.prcnt = 99.8;

    printf("%f ",vikash.prcnt);

    return 0;
}