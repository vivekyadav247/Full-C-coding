#include <stdio.h>
int maze( int er , int ec)
{
    int rightways = 0 ;
    int downways = 0;
    if(er==1 && ec==1) return 1;
    if(er==1){
        rightways += maze(er,ec-1);
    }
    if(ec==1){
        downways += maze(er-1,ec);
    }
    if(1<er && 1<ec ) {
        rightways += maze(er,ec-1);
        downways += maze(er-1,ec);
    }
    int totalways = rightways+ downways;
    return totalways ;
}
int main()
{
    int n;
    printf("ENTER NUMBER of ROWS :");
    scanf("%d", &n);
    int m;
    printf("ENTER NUMBER of COLUMN :");
    scanf("%d", &m);
    int ways = maze(n,m);
    printf("%d ", ways);
    return 0;
}