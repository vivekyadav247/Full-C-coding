#include<stdio.h>
int main(){
    int arr[5] = {9, 7 , 65, 87, 54};
    int n=5;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    //Bubble Sort
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=n-1-i;j++){
            if(arr[j]<arr[j+1]){ //only this sign(<) replace from this sign (>) to change for convert ascending bubble sort into descending bubble sort 
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}