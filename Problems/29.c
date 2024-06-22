#include <stdio.h>
int main(){
    int x;
    printf("Enter the Nth Term -: ");
    scanf("%d",&x);
    
    int a=4;

    for(int i=1;i<=x;i++){
        printf("%d ",a);
        a=a+3;
    }
    return 0;
}