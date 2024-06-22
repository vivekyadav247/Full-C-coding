#include <stdio.h>
int main (){
    int x;
    printf("Enter the year : ");
    scanf("%d",&x);

    if(x%4==0){
        printf("This is Leap year");
    }
    else{
        printf("This year isn't leap year");
    }
    return 0;
}