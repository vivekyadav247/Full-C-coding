#include <stdio.h>
int main(){
    int x=4,y,z;
    y=--x;
    z=x--;
    printf("\n%d%d%d",x,y,z);
    return 0;
}
// Here x value is 2 , y is 3 , z is 4.
// because 
//In the first line x value stored is 4 but 
//in next line y is --x then the 
//value of y is 4-1 = 3 and also 
//x is 3 in another line the 
//z is x-- then the z is 3 but 
//the value of x because of --sign 
//is 3-1 then in last the value of 
//x is 2 .