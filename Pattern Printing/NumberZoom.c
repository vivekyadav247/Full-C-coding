#include<stdio.h>
int main(){
    int x;
    printf("ENTER THE NUMBER FOR ZOOM -: ");
    scanf("%d",&x);
    int min;
    for (int i=1;i<=2*x-1;i++){
        for(int j=1;j<=2*x-1;j++){
            int a=i;
            if(a>x) a=2*x-i;
            int b=j;
            if(b>x) b=2*x-j;
            if(a<b) min = a;
            else min = b;
            printf("%d",x+1 - min);
        }
        printf("\n");
    }
    return 0;
}