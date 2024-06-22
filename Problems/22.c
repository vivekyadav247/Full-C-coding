#include <stdio.h>
int main(){
    double x1,y1,x2,y2,x3,y3;
    printf("Enter the value of x1 : ");
    scanf("%d",&x1);
    printf("Enter the value of y1 : ");
    scanf("%d",&y1);
    printf("Enter the value of x2 : ");
    scanf("%d",&x2);
    printf("Enter the value of y2 : ");
    scanf("%d",&y2);
    printf("Enter the value of x3 : ");
    scanf("%d",&x3);
    printf("Enter the value of y3 : ");
    scanf("%d",&y3);
    
    double m1 , m2 ;
    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);

    if(m1==m2){
        printf("The points fall on one straight line.");
    }
    else{
        printf("The points fall not on one straight line.");
    }
    return 0;
}