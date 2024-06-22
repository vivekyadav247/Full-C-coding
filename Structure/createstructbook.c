#include <stdio.h>
#include<string.h>
int main()
{
    struct book
    {
        char name[50];
        float price;
        int page;
    } a;
    
    a.page = 60;
    a.price = 9900;
    strcpy(a.name,"The Chase Master");

    printf("%d\n", a.page);
    printf("%f\n", a.price);
    printf("%s\n", a.name);

    return 0;
}