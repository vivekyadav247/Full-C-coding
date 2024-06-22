#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d", &x);
    int a,b,d,e;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x - i; j++)
        {
            printf(" ");
        }
        a=1;
        for (int k = 1; k <= i; k++)
        {
            b = a + 64;
            char ch = (char)b;
            printf("%c",b);
            a++;
        }
        e=i-1;
        for (int l=1;l<=i-1;l++){
            d = e + 64;
            char ch = (char)d;
            printf("%c",d);
            e--;
        }
        printf("\n");
    }
    return 0;
}