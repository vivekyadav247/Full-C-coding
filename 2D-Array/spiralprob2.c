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

    for (int k = 0; k < r; k++)
    {
        for (int l = 0; l < r; l++)
        {
            int b[r][r];
            int minr = 0;
            int minc = 0;
            int maxr = r - 1;
            int maxc = r - 1;
            int tne = r * r;
            int count = 0;
            while (count < tne)
            {
                // print the minimum row or top row
                for (int j = minc; j <= maxc; j++)
                {
                    b[k][l] = a[minr][j];
                    count++;
                }
                minr++;
                for (int i = minr; i <= maxr; i++)
                {
                    b[k][l] = a[i][maxc];
                    count++;
                }
                maxc--;
                for (int j = maxc; j >= minc; j--)
                {
                    b[k][l] = a[maxr][j];
                    count++;
                }
                maxr--;
                for (int i = maxr; i >= minr; i--)
                {
                    b[k][l] = a[i][minc];
                    count++;
                }
                minc++;
                printf("%d ",b[k][l]);
            }
        }
        printf("\n");
    }
    return 0;
}