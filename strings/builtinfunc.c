#include<stdio.h>
#include<string.h>
int main(){
    // char* str = "Virat Kohli"; 
    // int x = strlen(str); // it show only length of in double quot 
    // printf("%d",x);      //it not include the length of \0
    
    char s1[12] = "Virat Kohli";
    char s2[12];
    strcpy(s2,s1);
    printf("%s",s2); // This copy is Deep copy

    // char s1[10] = "Virat";
    // char s2[10] = "Kohli";
    // strcat(s1,s2);
    // printf("%s",s1);

    return 0;
}