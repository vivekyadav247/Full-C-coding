#include<stdio.h>
int main(){
    int i=65;
    while(i<=90){
        printf("%d ",i);
        char ch = (char)i;
        printf("%c\n",ch);
        i++;
    }
    return 0;
}