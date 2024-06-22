// Difference Between the Sum of Even and Sum of Odd Index //
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
    int sumOdd = 0;
    int sumEven = 0;
    for(int i=0;i<=6;i++){
        if(i%2==0) {
            sumEven += arr[i];
        }
        else {
            sumOdd += arr[i];
        }
    }
    int res = sumEven-sumOdd;
    printf("%d",res);
    return 0;
}