#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the 1st sides : ");
    scanf("%d",&a);
    printf("Enter the 2nd sides : ");
    scanf("%d",&b);
    printf("Enter the 3rd sides : ");
    scanf("%d",&c);

    if(a+b>c && b+c>a && a+c>b){
        printf("Valid Triangle .");
    }
    else{
        printf("Invalid Triangle .");
    }
    return 0;
}