#include <stdio.h>
int main(){
    int a;
    printf("Enter the a Number: ");
    scanf("%d",&a);

    if(a%5==0){
        if(a%3==0){
            printf("Number is divisible by 5 and 3 .");
        }
        else{
            printf("Number is not divisible by 5 and 3 .");
        }
    }
    else{
        printf("Number is not divisible by 5 and 3 .");
    }
    return 0;
}