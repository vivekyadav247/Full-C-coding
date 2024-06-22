#include <stdio.h>
int factorial(int n)
{
    if (n == 1 || n == 0)
        return 1; // base case//
    int recu = n*factorial(n-1);
    return recu;
}
int main()
{
    int n;
    printf("ENTER A NUMBER :");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("%d", fact);
    return 0;
}