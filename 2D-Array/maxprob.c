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
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (max < a[i][j])
                max = a[i][j];
        }
    }
    printf("The Maximum value in this Matrix is %d", max);
    return 0;
}