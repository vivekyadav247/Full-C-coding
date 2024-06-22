// SUM of ARRAY ELEMENT //
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
    int sum = 0;
    for(int i=0;i<x;i++){
        sum = sum + arr[i];
    }
    printf("%d",sum);
    return 0;
}