#include<stdio.h>
int main(){
    int r;
    printf("Enter the Total roll no. :");
    scanf("%d",&r);
    int c;
    printf("Enter the total Subject :");
    scanf("%d",&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the marks of roll no. %d : ",i+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        printf("The marks of Roll no. %d is ",i+1);
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}