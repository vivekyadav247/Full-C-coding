#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "Dirat Kohli";
    char* s2 = s1; // s2 is a shallow copy
    s1[0]='V';
    printf("%s",s2);
    return 0;
}
