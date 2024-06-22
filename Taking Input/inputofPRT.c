#include<stdio.h>
int main(){
    float Principal , Rate , Time ;
    printf("Enter Principal : ");
    scanf("%f",&Principal);
    printf("Enter Rate : ");
    scanf("%f",&Rate);
    printf("Enter Time : ");
    scanf("%f",&Time);
    float SimpleIntrest = (Principal*Rate*Time)/100;

    printf("Simple Intrest is : %f",SimpleIntrest);
    return 0;
}