#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "Dirat Kohli";
    char s2 [] = "Dirat Kohli";
    s2[0]='V';
    printf("%s\n",s1);
    printf("%s",s2);
    return 0;
}