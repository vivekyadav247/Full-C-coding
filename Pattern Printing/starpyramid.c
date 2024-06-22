#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d", &x);
    int y=1;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x - i; j++)
        {
            printf(" ");
        }
        
        for (int k = 1; k <= y; k++)
        {
            printf("*");
        }
        y=y+2;
        printf("\n");
    }
    return 0;
}