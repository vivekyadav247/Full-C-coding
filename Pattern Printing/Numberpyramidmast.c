#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d", &x);

    int y = 1;

    for (int i = 1; i <= x; i++)
    {
        int a = i-1;
        for (int j = 1; j <= x - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        for (int l = 1; l <= i -1; l++)
        {
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}