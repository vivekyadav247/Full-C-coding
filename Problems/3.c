#include<stdio.h>
int main(){
    float P , R , T , SI ;
    P = 10526;
    R = 8.59;
    T = 2.25;
    SI = (P*R*T)/100;

    printf("Simple Interest is %f",SI);
    return 0;
}