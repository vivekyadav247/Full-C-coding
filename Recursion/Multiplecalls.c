// fibonnaci numbers//
#include <stdio.h>
int fibo(int n )
{
    if(n==1 || n==2 ) 
    return 1 ;
    int f = fibo(n-1) + fibo(n-2) ;    
    return f ;
}
int main()
{
    int n;
    printf("ENTER A NUMBER :");
    scanf("%d", &n);
    int f = fibo(n);
    printf("%d ",f);
    return 0;
}