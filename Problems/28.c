#include <stdio.h>
int main(){
    int x;
    printf("Enter the nth Term :- ");
    scanf("%d",&x);
    for(int i=1;i<=x*2-1;i=i+2){
        printf("%d ",i);
    }

    return 0;
}