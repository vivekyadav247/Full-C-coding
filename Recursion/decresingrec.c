#include <stdio.h>
void descending(int n)
{
    if (n == 0)
        return;
    printf("%d\n", n);
    descending(n - 1);
    return;
}
int main()
{
    int n;
    printf("ENTER A NUMBER :");
    scanf("%d", &n);
    descending(n);
    return 0;
}