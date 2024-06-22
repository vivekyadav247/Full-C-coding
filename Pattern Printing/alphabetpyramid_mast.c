#include <stdio.h>
int main()
{
    int y;
    printf("ENTER THE NUMBER : ");
    scanf("%d", &y);
    int x=y-1;

    int nsp = 1;
    int nst = x;
    int a=1;
    for (int i = 1; i <= 2 * x + 1; i++)
    {
       int b;
        b = a + 64;
        char c = (char)b;
        printf("%c", c);
        a++;
    }
    printf("\n");
    for (int i = 1; i <= x; i++)
    {
        int a=1 ,b;

        for (int j = 1; j <= nst; j++)
        {
            b = a + 64;
            char c = (char)b;
            printf("%c", c);
            a++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            b = a + 64;
            char c = (char)b;
            printf(" ");
            a++;
        }
        for (int l = 1; l <= nst; l++)
        {
            b = a + 64;
            char c = (char)b;
            printf("%c", c);
            a++;
        }
        nst--;
        nsp += 2;
        printf("\n");
    }
    return 0;
}