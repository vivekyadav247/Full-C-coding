#include <stdio.h>
int main()
{
    int r;
    printf("Enter the no. of Row :\n");
    scanf("%d", &r);
    int c;
    printf("Enter the no. of column :\n");
    scanf("%d", &c);
    int a[r][c];
    printf("Enter the first matrices elements :\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int x;
    printf("Enter the no. of Row :\n");
    scanf("%d", &x);
    int y;
    printf("Enter the no. of column :\n");
    scanf("%d", &y);
    int b[x][y];
    printf("Enter the second matrices elements :\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    if (c != x)
        printf("Enter matrix format is wrong ");
    else
    {
        int res[r][y];
        printf("The Multiplication of two matrices is :\n");
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < y; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < x; k++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < y; j++)
            {
                printf("%d  ", res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}