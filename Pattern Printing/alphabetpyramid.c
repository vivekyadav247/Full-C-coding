#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d", &x);
    int y=1;
    int a,b;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x - i; j++)
        {
            printf(" ");
        }
        a=1;
        for (int k = 1; k <= y; k++)
        {
            b = a + 64;
            char ch = (char)b;
            printf("%c",b);
            a++;
        }
        y=y+2;
        printf("\n");
    }
    return 0;
}