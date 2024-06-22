#include <stdio.h>
int main(){
    int x;
    printf("Enter the value :- ");
    scanf("%d",&x);
     int count =0;
     while(x!=0){
        x = x/10;
        count++;
     }
     printf("The no. of Digits are %d",count);
    return 0;
}