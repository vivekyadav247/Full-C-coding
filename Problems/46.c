#include<stdio.h>
int factorial(int a){
    int fact =1;
    for(int i=1;i<=a;i++){
        fact = fact*i;
    }
    return fact ;
}
int main(){
    int a;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&a);
    int fact = factorial(a);
    printf("%d",fact);
    return 0;
}