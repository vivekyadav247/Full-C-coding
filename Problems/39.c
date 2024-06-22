//fibbonacci number
#include <stdio.h>
int main(){
    int x;
    printf("Enter the value :- ");
    scanf("%d",&x);
    int a =0;
    int b =1;
    int sum =0;
    for(int i=1; i<=x; i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("The %d fibonacci number is  : %d\n",i,a);        
    }
    
    
    return 0;
}