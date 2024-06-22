#include<stdio.h>
int main(){
    int x;
    printf("ENTER the size : ");
    scanf("%d",&x);
    int arr[x] ;
    for(int i=0;i<=x-1;i++){
        printf("Enter element no. %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int y;
    printf("ENTER the Number : ");
    scanf("%d",&y);
    int totalpairs = 0;
    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            if(arr[i]+arr[j]==y) {
                totalpairs++ ;
            }
        }
    }    
    printf("%d",totalpairs);
    return 0;
}