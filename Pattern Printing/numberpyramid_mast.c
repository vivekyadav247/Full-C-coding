#include <stdio.h>
int main()
{
    int y;
    printf("ENTER THE NUMBER : ");
    scanf("%d", &y);
    int x=y-1;
    int nsp = 1;
    int nst = x;
    for (int i = 1; i <= 2*x + 1; i++)
    {
        printf("%d",i);
    }
    printf("\n");
    for (int i = 1; i <= x; i++)
    {
        int a=1;
        for (int j = 1; j <= nst; j++)
        {
            printf("%d",a);
            a++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
            a++;
        }
        for (int l = 1; l <= nst; l++)
        {
            printf("%d",a);
            a++;
        }
        nst--;
        nsp += 2;
        printf("\n");
    }
    return 0;
}