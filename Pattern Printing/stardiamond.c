#include<stdio.h>
int main(){
    int x;
    printf("ENTER THE ONLY ODD NUMBER : ");
    scanf("%d",&x);
    int nsp = x/2;
    int nst = 1;
    int ml = x/2 +1;
    for (int i=1;i<=x;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        if(i<ml){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
    return 0;
}