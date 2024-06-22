#include <stdio.h>
int powerlog(int a , int b )
{
    if(b==0) 
    return 1  ;
    int c = powerlog(a,b/2);
    if(b%2==0) return c*c;
    else  return c*c*a ;
}
int main()
{
    int a , b;
    printf("ENTER 1st NUMBER :");
    scanf("%d", &a);
    printf("ENTER 2nd NUMBER :");
    scanf("%d", &b);
    int p = powerlog(a,b);
    printf("%d",p);    
    return 0;
}