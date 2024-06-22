#include<stdio.h>
int main(){
    int x;
    printf("ENTER the size : ");
    scanf("%d",&x);
    int arr[x] ;
    for(int i=0;i<=x-1;i++){
        printf("ENTER THE ELEMENT No. %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int max = arr[0] ;
    for(int i=0;i<x;i++){
        if(max<arr[i]) max = arr[i];
        else;
    }
    printf("%d",max);
    return 0;
}