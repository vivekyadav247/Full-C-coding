#include<stdio.h>
int main(){
    int X , Y ;
    printf("Enter Dividend ");
    scanf("%d",&X);
    printf("Entet Divisor ");
    scanf("%d",&Y);
    int Q = X/Y ;
    int Remainder = X % Y;
    printf("Remainder is : %d",Remainder);
    return 0;
}
