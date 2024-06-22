#include <stdio.h>
int main(){
    int x;
    printf("Enter the Number : ");
    scanf("%d",&x);
    int a=x;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=a;j++){
            printf("%d ",j);           
        }
        a--;
        printf("\n");
    }

    return 0;
}