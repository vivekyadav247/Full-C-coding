#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d", &x);
    int a, b;

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
            printf("%c", b);
            a++;
        }
        printf("\n");
    }
    return 0;
}