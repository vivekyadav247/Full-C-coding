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
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the first matrices elements : ");
            scanf("%d", &a[i][j]);
        }
    }
    int x = r;
    int y = c;
    int b[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("Enter the second matrices elements : ");
            scanf("%d", &b[i][j]);
        }
    }
    int res[x][y];
    printf("The sum of two matrices is\n ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            res[i][j] = a[i][j] + b[i][j];
            printf("%d", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}