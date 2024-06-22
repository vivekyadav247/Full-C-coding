#include <stdio.h>
int main(){
    int x;
    printf("Enter the Number : ");
    scanf("%d",&x);

    for(int i=1;i<=x;i++){
        if(i%2!=0){
            for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        }
        else
        {
            int a=1;
            int b;
            for(int j=1;j<=i;j++){

                b=a+64;
                char ch=(char)b;
                printf("%c ",ch);
                a++;
            }
        
        }
        printf("\n");
    }

    return 0;
}