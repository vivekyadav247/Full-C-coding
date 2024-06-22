// a ki power b calculate karenge //
#include <stdio.h>
int power(int a , int b )
{
    if(b==1) 
    return a  ;
    int p = a*power(a,b-1);       
    return p ;
}
int main()
{
    int a , b;
    printf("ENTER 1st NUMBER :");
    scanf("%d", &a);
    printf("ENTER 2nd NUMBER :");
    scanf("%d", &b);
    int p = power(a,b);
    printf("%d",p);    
    return 0;
}