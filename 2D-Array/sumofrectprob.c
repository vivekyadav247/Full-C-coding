#include <stdio.h>
int main()
{
    int r;
    printf("Enter the no. of Row :");
    scanf("%d", &r);
    int c;
    printf("Enter the no. of column :");
    scanf("%d", &c);
    int a[r][c];
    printf("Enter the all elements : ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int sum = 0;
    int x , y ;
    printf("enter (n,m) where rectangle start :");
    scanf("%d %d", &x,&y);
    int p , q ;
    printf("enter (n,m) where rectangle end :");
    scanf("%d %d", &p,&q);

    for (int i = x-1; i < p; i++)
    {
        for (int j = y-1; j < q; j++)
        {
            sum += a[i][j];
        }
    }
    printf("Sum of all elements of Matrix is %d",sum);
    return 0;
}