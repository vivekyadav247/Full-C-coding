#include<stdio.h>
int main(){
    int x;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<=x-1;i++){
        printf("ENTER THE ELEMENT No. %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<x;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}