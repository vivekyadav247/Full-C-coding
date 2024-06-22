#include <stdio.h>
#include<limits.h>
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
    int min = INT_MAX;
    int mini = 0;
    int minj = 0 ;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(min>a[i][j]){
                min = a[i][j];
                mini=i+1;
                minj=j+1;
            }
        }
    }
    printf("The Maximum value in this Matrix is %d\n",min);
    printf("The indexis (%d,%d)", mini ,minj);
    return 0;
}