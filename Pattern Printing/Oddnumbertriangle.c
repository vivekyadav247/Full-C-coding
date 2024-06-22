#include<stdio.h>
int main(){
    int x;
    printf("Enter The Number : ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a=a+2;
        }
        printf("\n");
    }
    
    return 0;
}