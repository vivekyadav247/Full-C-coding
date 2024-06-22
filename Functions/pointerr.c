#include<stdio.h>
int main(){
    int a=5;
    int* b= &a;
    // very imp here a is change with help of *b// *b = 7;
    printf("%d",a) ;   
    return 0;
}