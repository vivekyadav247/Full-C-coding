#include <stdio.h>
int ways(int n )
{
    if( n==1)return 1;
    if(n==2)return 2; 
    int w = ways(n-1) + ways(n-2) ;    
    return w ;
}
int main()
{
    int n;
    printf("ENTER A NUMBER :");
    scanf("%d", &n);
    int w = ways(n);
    printf("%d ",w);
    return 0;
}