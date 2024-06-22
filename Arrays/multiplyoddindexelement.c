// Multiply Odd indexed elements by 2 and add 10 to the even elements//
#include<stdio.h>
int main(){
    int x;
    printf("ENTER the size : ");
    scanf("%d",&x);
    int arr[x] ;
    for(int i=0;i<=x-1;i++){
        printf("ENTER ELEMENT No. %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=x-1;i++){
        if(i%2!=0) arr[i]*=2;
        else arr[i]+=10;
    }
    for(int i=0;i<=x-1;i++){
        printf("%d ",arr[i]);
    }  
    return 0;
}