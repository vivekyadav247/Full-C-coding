// print the elements greater than x //
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
    int y;
    printf("Enter the number : ");
    scanf("%d",&y);
    for(int i=0;i<=x-1;i++){
        if(arr[i]>y)
        printf("The Number which are greater than to given numbers is %d \n",arr[i]);
        else ;    
    }  
    return 0;
}