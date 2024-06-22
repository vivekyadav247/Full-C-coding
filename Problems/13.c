#include <stdio.h>
int main() {
    int x,y;
    printf("Enter the Selling Price :");
    scanf("%d",&x);
    printf("Enter the Cost Price :");
    scanf("%d",&y);

    if (x>y){
        printf("Profit is : ""%d", x-y);
    }
    if (x<y){
        printf("Profit is : ""%d", y-x);
    }
    else{
        printf("No Profit , No Loss");
    }
    return 0;

}