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
        int a=1;
        if(i>x+1){
            a=2*(x+1)-i;
            printf("%d",a);
        }else
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
        int b=x+1-i;
        for (int l = 1; l <= nst; l++)
        {
            printf("%d",b);
            b--;
        }
        nst--;
        nsp += 2;
        printf("\n");
    }
    return 0;
}