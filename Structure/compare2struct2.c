#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    typedef struct Date
    {
        int date;
        int month;
        int year;
    } Date;

    Date x , y;

    
    x.date = 5 ;    
    x.month = 12;    
    x.year = 1999;

    y.date = 5;    
    y.month = 12;    
    y.year = 1999;

    Date z;
    z=x;
    bool flag = true;
    if(x.date!=z.date) flag = false;
    if(x.month!=z.month) flag = false;
    if(x.year!=z.year) flag = false;

    if(flag==true) printf("The Dates are Same ");
    else printf("The Dates are Different ");


    return 0;
}