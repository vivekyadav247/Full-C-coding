#include<stdio.h>
int main(){
    int x;
    printf("ENTER TOTAL no. You Can Calculate : ");
    scanf("%d",&x);
    int arr[x] ;
    for(int i=0;i<=x-1;i++){
        printf("ENTER THE ELEMENT No. %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int product = 1;
    for(int i=0;i<x;i++){
        product = product * arr[i];
    }
    printf("%d",product);
    return 0;
}