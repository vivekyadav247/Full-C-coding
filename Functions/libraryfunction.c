#include <stdio.h>
#include <math.h> // another Library 
int main()
{
    int a;
    printf("ENTER THE NUMBER :");
    scanf("%d", &a);

    int root = sqrt(a); //sqrt is function of second library
    printf("The Square Root is %d", root);
    return 0;
}