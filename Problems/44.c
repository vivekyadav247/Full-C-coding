//Pascal Triangle//
#include<stdio.h>
int factorial (int x){
    int fact =1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int combination (int n,int r){
    int nCr = factorial(n)/(factorial(r)*factorial(n-r));
    return nCr;
}
int main(){
    int n ;
    printf("ENTER n :");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            int icj=combination(i,j);
            printf(" %d",icj );
        }
        printf("\n");
    }

    return 0;
}