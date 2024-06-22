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

    y.date = 19;    
    y.month = 12;    
    y.year = 1999;

    bool flag = true;
    if(x.date!=y.date) flag = false;
    if(x.month!=y.month) flag = false;
    if(x.year!=y.year) flag = false;

    if(flag==true) printf("The Dates are Same ");
    else printf("The Dates are Different ");

    return 0;
}