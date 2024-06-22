#include <stdio.h>
int main (){
   int n;
   printf("Enter the Number of Rows :");
   scanf("%d",&n);
   int m;
   printf("Enter the Number of Column :");
   scanf("%d",&m);
   for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(j==1 || j==n || i==1 || i==m)
            printf("*");
            else printf(" ");
    }
    printf("\n");
   }
    return 0;
}