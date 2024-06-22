#include <stdio.h>
int main(){
    int x;
    printf("Enter the Number :- ");
    scanf("%d",&x);

    int a=0;
    for (int i = 2; i<=x-1; i++)
    {
       if(x%i==0){
        a=1;
        break;
       }
    }
    if(a==0)
    printf("The Number is Prime Number.");
    else
    printf("The Number is Composite Number.");
    
    return 0;
}