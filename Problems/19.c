#include <stdio.h>
int main(){
    int x;
    printf("Enter the Number : ");
    scanf("%d",x);

    if(x%5==0 || x%3==0){
        if(x%15!=0){
            printf("Number is divisible by 5 or 3 but not 15.");
        }
        else{
            printf("Number is divisible by 15.");
        }
    }
    else{
        printf("Number is not divisible by 5 or 3.");
    }
    return 0;
}