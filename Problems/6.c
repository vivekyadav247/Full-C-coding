#include<stdio.h>
int main(){
    float x;
    printf("Enter A Number : ");
    scanf("%f",&x);
    int y;
    y = x;
    float z = x-y;
    printf("%f",z);
    return 0;
}