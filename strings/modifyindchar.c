#include <stdio.h>
int main()
{
    char str[] = "Vivek ";
    int i = 0;
    str[2] = 'k';
    str[3] = 97;
    str[4] = 's';
    str[5] = 'h';
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    return 0;
}