#include<stdio.h>
int main(){
    int x;
    printf("Total student is : ");
    scanf("%d",&x);
    int marks[x] ; // 5 dabbe create kar liya 
    for(int i=0;i<=x-1;i++){
        printf("ENTER THE MARKS OF ROLL NO. %d : ",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<x;i++){
        if(marks[i]<35)
        printf("THE ROLL no. of failed student is : %d \n",i+1);
        else ;
    }
    return 0;
}