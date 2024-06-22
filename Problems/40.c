#include <stdio.h>
int main(){
    int x;
    printf("Enter base :- ");
    scanf("%d",&x);
    int y;
    printf("Enter exponent :- ");
    scanf("%d",&y);
    int power =1;

    for(int i=1; i<=y; i++){
        power=power*x;

    }
    printf("Answer is %d",power);
    return 0;
}