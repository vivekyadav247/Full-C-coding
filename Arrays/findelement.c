#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int x ;
    printf("Enter the Number to find in array : ");
    scanf("%d",&x);
    bool flag = false;
    int i; 
    for( i=0;i<=6;i++){
        if(arr[i]==x){
            flag = true;
            break;
        }
    } 
    if(flag==false) printf("%d is not Present in this Array\n",x );
    else printf("%d is Present in this Array and its index is %d\n",x,i );      
    return 0;
}