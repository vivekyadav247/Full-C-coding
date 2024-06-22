#include <stdio.h>
#include <string.h>
int main()
{
    char* s1 = "Virat Kohli";
    char* s2  ;
    s2=s1;
    s2="Run Machine";
    printf("%s\n",s1);
    printf("%s",s2);
    return 0;
}
