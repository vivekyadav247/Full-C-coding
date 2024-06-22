#include <stdio.h>
int main(){
    int x;
    printf("Enter the value : ");
    scanf("%d",&x);

    if(x<0){
        printf("Absolute value is " "%d",(-1)*x);

    }
    else{
        printf("Absolute value is " "%d",x);
    }
    return 0;
}