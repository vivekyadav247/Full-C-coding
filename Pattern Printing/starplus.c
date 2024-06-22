#include<stdio.h>
int main(){
    int x;
    printf("Enter The Number : ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
       
        for(int j=1;j<=x;j++){
            int a=x/2 + 1;
            if(j==a || i==a) printf("*");
            else printf(" ");
        }
        printf("\n");
    }

    return 0;
}