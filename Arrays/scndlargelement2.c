#include<stdio.h>
#include<limits.h>
int main(){
    int x;
    printf("ENTER the size : ");
    scanf("%d",&x);
    int arr[x] ;
    for(int i=0;i<=x-1;i++){
        printf("Enter element no. %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int max = INT_MIN;
    int smax = INT_MIN;   
    for(int i=0;i<x;i++){
        if(max<arr[i]) {
            smax = max;
            max = arr[i];
        }
        else if(smax<arr[i]) {
            smax = arr[i];
        }               
    }
    printf("%d",smax);
    return 0;
}