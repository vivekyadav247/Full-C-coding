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
    int minr = 0;
    int minc = 0;
    int maxr = r - 1;
    int maxc = c - 1;
    int tne = r * c;
    int count = 0;
    while (count < tne)
    {
        // print the minimum row or top row
        for (int j = minc; j <= maxc; j++)
        {
            printf("%d ", a[minr][j]);
            count++;
        }
        minr++;
        for (int i = minr; i <= maxr; i++)
        {
            printf("%d ", a[i][maxc]);
            count++;
        }
        maxc--;
        for (int j = maxc; j >= minc; j--)
        {
            printf("%d ", a[maxr][j]);
            count++;
        }
        maxr--;
        for (int i = maxr; i >= minr; i--)
        {
            printf("%d ", a[i][minc]);
            count++;
        }
        minc++;
    }
    return 0;
}