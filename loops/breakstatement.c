#include <stdio.h>
int main(){
    int x;
    printf("Enter the number :- ");
    scanf("%d",&x);

    for (int i = 2; i <=x-1; i++)
    {
        if(x%i==0){
            printf("Number is Composite .");
            break;
        }
        else{
            printf("Number is Prime.");
            break;
        }
    }
    
    return 0;
}