#include <stdio.h>
int main(){
    int l,b;
    printf("Enter the length : ");
    scanf("%d",&l);
    printf("Enter the Breadth : ");
    scanf("%d",&b);
    int Area = l*b;
    int Perimeter = 2*(l+b);

    if(Area>Perimeter){
        printf("Area is Greater than Perimeter");
    }
    if(Area<Perimeter){
        printf("Area is Less to the Perimeter");
    }
    
    return 0;
}