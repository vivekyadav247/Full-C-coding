#include <stdio.h>
int ways(int n )
{
    if( n<=3)return n; 
    int w = ways(n-1) + ways(n-2) + ways(n-3) ;    
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