#include <stdio.h>
int main(){
    int x;
    printf("Enter The Number : ");
    scanf("%d",&x);
    if (x%2==0)
    {
        printf("Given Number are Even");
    }
    else{
        printf("Given Number are Odd");
    }

    return 0;
}
