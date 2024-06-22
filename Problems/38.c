#include <stdio.h>
int main(){
    int x;
    printf("Enter the value :- ");
    scanf("%d",&x);
    int fac =1;
    for(int i=1; i<=x; i++){
        
        fac=fac*i;
    }
    printf("Sum is : %d",fac);
    
    return 0;
}