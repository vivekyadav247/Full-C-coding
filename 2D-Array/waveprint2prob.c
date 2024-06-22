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
    printf("Wave print of matrix is \n");
    for (int j = 0; j < c; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = r - 1; i >= 0; i--)
            {
                printf("%d ", a[i][j]);
            }
        }
        else
        {
            for (int i = 0; i < r; i++)
            {
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}