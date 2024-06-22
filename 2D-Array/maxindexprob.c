#include <stdio.h>
#include <limits.h>
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
    int max = INT_MIN;
    int maxi = 0;
    int maxj = 0 ;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (max < a[i][j]){
                max = a[i][j];
                maxi=i+1;
                maxj=j+1;
            }
        }
    }
    printf("The Maximum value in this Matrix is %d\n", max);
    printf("The indexis (%d,%d)", maxi ,maxj);
    return 0;
}