#include <stdio.h>
int main()
{
    int r;
    printf("Enter the no. of Row :");
    scanf("%d", &r);
    int a[r][r];
    printf("Enter the all elements :\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Transpose of matrix is \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = i; j < r; j++)
        {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    for (int i = 0; i<r; i++)
    {
        for (int j =r -1; j>=0; j--)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}