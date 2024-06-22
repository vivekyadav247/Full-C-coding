#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "Dirat Kohli";
    int size = 0;
    int i = 0;
    while (s1[i] != '\0')
    {
        size++;
        i++;
    }
    char s2[size];
    for (int k = 0, j = 0; k <= size, j <= size; k++, j++)
    {
        char temp = s1[k];
        s2[j] = temp;
    }
    s2[0] = 'V';
    printf("%s\n",s1);
    printf("%s",s2);
    return 0;
}