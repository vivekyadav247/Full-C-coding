#include <stdio.h>
int main()
{
    int x;
    printf("ENTER THE NUMBER : ");
    scanf("%d", &x);
    int nsp = 1;
    int nst = x;
    for (int i = 1; i <= 2*x + 1; i++)
    {
        printf("*");
    }
    printf("\n");
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            printf("*");
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
        }
        for (int l = 1; l <= nst; l++)
        {
            printf("*");
        }
        nst--;
        nsp += 2;
        printf("\n");
    }
    return 0;
}