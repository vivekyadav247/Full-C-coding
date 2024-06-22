#include<stdio.h>
int main(){
    struct students
    {
        int marks;
        float prcnt;
        char grade;
    };
    struct students vivek; 
    vivek.marks = 92; // Dot(.) se ise access karte hai//
    vivek.prcnt = 94.5;
    vivek.grade = 'A';
             
    printf("%f ",vivek.prcnt);  
    return 0;
}