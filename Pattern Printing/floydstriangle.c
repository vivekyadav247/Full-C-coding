#include<stdio.h>
int main(){
    int x;
    printf("Enter the NUmber : ");
    scanf("%d",&x);
    int a=1;
    for(int i=1;i<=x;i++){
        
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a=a++; //for print odd number in this triangle we can replace a=a++ with a=a+2 //
        }
        printf("\n");
    }
    return 0;
}