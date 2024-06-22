#include<stdio.h>
int min(int a, int b){
    if(a<b) return a;
    else return b;    
}
int gcd(int a , int b){
    int hcf;
    for (int i=min(a,b);i>=1;i--){
        if (a%i==0 && b%i==0){
            hcf =i;
            break;
        }
    }
    return hcf;
}
int main(){
    int a,b;
    printf("ENTER 1ST NUMBER :");
    scanf("%d",&a);
     printf("ENTER 2nd NUMBER :");
    scanf("%d",&b);
    int hcf = gcd(a,b);
    printf("The HCF IS %d and %d : %d",a,b,hcf);
    return 0;
}