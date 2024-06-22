#include <stdio.h>
int main(){
    int x;
    printf("Enter the Number : ");
    scanf("%d",&x);

    if (x>99 && x<1000){
        printf("It is three Digit Number .");
    }
    else{
        printf("It is not three Digit Number .");
    }
    
    return 0;
}