#include <stdio.h>
int main(){
    int x;
    printf("Enter the Number : ");
    scanf("%d",&x);

    for(int i=x;i<=x*10;i=i+x){
        printf("%d\n",i);
    }
    return 0;
}