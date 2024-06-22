#include<stdio.h>
int main (){
    int x;
    printf("Enter The Value -: ");
    scanf("%d",&x);
    int sum=0;
    int ld=0;
    while(x!=0){
        ld=x%10;
        if(ld%2==0)
        sum=sum+ld;
        x=x/10;
    }
    printf("The Sum of Even Digit is %d",sum);
    return 0;
}