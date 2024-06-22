#include<stdio.h>
int main(){
    char str[] = "Virat Kohli";
    int i=0;
    // while(str[i]!='\0'){
    //     printf("%c",i[str]);
    //     i++;
    // }
    // while(str[i]!='\0'){
    //     printf("%c",*(str+i));
    //     i++;
    // }
    while(str[i]!='\0'){
        printf("%c",*(i+str));
        i++;
    }
    return 0;
}