#include <stdio.h>
int main(){
    int x;
    printf("Enter the value :- ");
    scanf("%d",&x);
     
     int r = 0;
     while(x>0){
        r = r*10;
        r = r+(x%10);        
        x=x/10;
     }
     printf("The Reverse Number are %d",r);
    return 0;
}