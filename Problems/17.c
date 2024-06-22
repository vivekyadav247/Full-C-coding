#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter the number 1 -: ");
    scanf("%d", &x);
    printf("Enter the number 2 -: ");
    scanf("%d", &y);
    printf("Enter the number 3 -: ");
    scanf("%d", &z);
    if (x > y && x > z)
    {
        printf("%d is greatest ",x);
    }
    if (y > z && y > x)
    {
        printf("%d is greatest ",y);
    }
    if (z > y && z > x)
    {
        printf("%d is greatest ",z);
    }

    return 0;
}