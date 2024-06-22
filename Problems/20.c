#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the 1st Number : ");
    scanf("%d",&a);
    printf("Enter the 2nd Number : ");
    scanf("%d",&b);
    printf("Enter the 3rd Number : ");
    scanf("%d",&c);

    if(a>b){
        if(a>c){
            printf("1st Number is Greatest.");
        }
        else{
            printf("3rd Number is Greatest.");
        }
    }
    else{
        if(b>c)
            printf("2nd Number is Greatest.");
        else
        printf("3rd Number is Greatest.");
    }
    return 0;
}