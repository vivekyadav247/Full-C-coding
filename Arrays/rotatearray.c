#include<stdio.h>
void reverse (int a[],int x,int y){
    for(int i=x,j=y;i<j;i++,j--){
        int temp = a[i];
        a[i]=a[j];
        a[j]=temp;
    }    
    return ;
}
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[n] ;
    for(int i=0;i<=n-1;i++){
        printf("Enter element no. %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter k : ");
    scanf("%d",&k);
    k=k%n; //step 1
    reverse(arr,0,n-1);//step 2
    reverse(arr,0,k-1);//step 3
    reverse(arr,k,n-1);//step 4
    for(int i=0;i<=n-1;i++){
        printf("%d\n",arr[i]);        
    } 
        
    return 0;
}