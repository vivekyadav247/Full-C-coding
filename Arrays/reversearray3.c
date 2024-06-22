// Using WHile Loop //
#include<stdio.h>
void reverse (int a[],int x){
    int i = 0;
    int j = x-1;
    while(i<j){
        int temp = a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    return ;
}
int main(){
    int x;
    printf("ENTER the size : ");
    scanf("%d",&x);
    int arr[x] ;
    for(int i=0;i<=x-1;i++){
        printf("Enter element no. %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    reverse(arr,x);
    for(int i=0;i<=x-1;i++){
        printf("%d\n",arr[i]);        
    }
    return 0;
}