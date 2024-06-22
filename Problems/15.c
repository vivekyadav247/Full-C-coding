#include <stdio.h>
int main (){
    int x;
    printf("Enter the Number : ");
    scanf("%d",x);
    if (x/5 && x/3)
    {
       printf("Number is Divisible by 5 and 3.");
    }
    else{
        printf("Number is not divisible by 5 and 3.");
    }
    
    return 0;
}