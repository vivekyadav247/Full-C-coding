#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Virat Kohli";
    char* ptr = str;
    //printf("%p\n",&str[0]);
    //printf("%p\n",ptr);
    int i=0;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        i++;
        ptr++;
    }
    return 0;
}