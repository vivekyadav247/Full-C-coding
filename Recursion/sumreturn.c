// Print sum from 1 to n (Return Type)//
#include <stdio.h>
void sum(int n , int s)
{
    if(n==0) {
        printf("%d",s);
        return ;
    }
    sum(n-1,s+n);    
    return;
}
int main()
{
    int n;
    printf("ENTER A NUMBER :");
    scanf("%d", &n);
    sum(n ,0);
    return 0;
}