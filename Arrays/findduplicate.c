#include<stdio.h>
int main(){
    int arr[7] = {1,2,3,4,5,3,7};
    int x ;
    printf("Enter the Number to find in array : ");
    scanf("%d",&x);
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i]==arr[j]) x=1;
        }
    }
    if(x==1)  printf("This number is the duplicate in this array ")  ;
    else printf("This number is not the duplicate in this array ")  ;
    
    return 0;
}