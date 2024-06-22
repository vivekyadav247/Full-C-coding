// combination and permutation//
#include<stdio.h>
int factorial (int x){
    int fact =1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n , r;
    printf("ENTER n :");
    scanf("%d",&n);
    printf("ENTER r :");
    scanf("%d",&r);
    int nCr = factorial(n)/(factorial(r)*factorial(n-r));
    printf("%d",nCr);
    return 0;
}