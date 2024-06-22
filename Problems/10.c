#include <stdio.h>
int main(){
    int x;
    printf("Enter the value : ");
    scanf("%d",&x);
    
    if (x%5==0)
    {
        printf("Number are divisible by 5");
    }
    else{
        printf("Number are not divisible by 5");
    }
    

    return 0;
}