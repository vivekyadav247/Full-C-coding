#include<stdio.h>
#include<limits.h>
int main(){
    int x;
    printf("ENTER The size : ");
    scanf("%d",&x);
    int arr[x] ;
    for(int i=0;i<=x-1;i++){
        printf("ENTER THE ELEMENT No. %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int min = INT_MAX ;
    for(int i=0;i<x;i++){
        if(min>arr[i]) min = arr[i];
        else;
    }
    printf("%d",min);
    return 0;
}