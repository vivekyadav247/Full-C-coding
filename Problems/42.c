#include<stdio.h>
int main (){
    int x;
    printf("Enter The Value -: ");
    scanf("%d",&x);
    int sum=0;
    int ld=1;
    int product=0;
    while(x!=0){
        ld=x%10;
        product=ld*ld*ld;
        sum=sum+product;
        x=x/10;
    }
        printf("The ASCII value is %d",sum);
    return 0;
}