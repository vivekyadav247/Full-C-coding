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
    printf("Enter the all elements :\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Transpose of matrix is \n");
    int b[c][r];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            b[i][j] = a[j][i];
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}