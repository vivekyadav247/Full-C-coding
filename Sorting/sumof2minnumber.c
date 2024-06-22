#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int n=5;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    //Bubble Sort
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\n");
    int first;
    for(int i=0;i<n;i++){
        first += arr[i]*10; 
    }
    printf("%d",first);

    return 0;
}