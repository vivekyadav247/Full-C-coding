#include <stdio.h>
int main(){
    int x;
    printf("Enter the value :- ");
    scanf("%d",&x);
     int sum = 0;
     int ld = 0;
     while(x!=0){
        ld = x%10;
        sum=sum+ld;
        x=x/10;
     }
     printf("The Sum of Digits are %d",sum);
    return 0;
}