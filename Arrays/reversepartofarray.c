#include<stdio.h>
int main(){
    int n;
    printf("ENTER the size : ");
    scanf("%d",&n);
    int arr[n] ;
    for(int i=0;i<=n-1;i++){
        printf("Enter element no. %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int k;
    printf("ENTER the size : ");
    scanf("%d",&k);
    for(int i=0,j=k;i<=j;j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=0;i<=n-1;i++){
        printf("%d\n",arr[i]);        
    }
    return 0;
}