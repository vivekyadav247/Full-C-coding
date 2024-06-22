#include<stdio.h>
void india(){
    printf("You Are In India\n");
    void australia();
    australia();
    return;
}

void england(){
    printf("You Are In England\n");
    return;
}

int main(){
    void india();
    india();
    return 0;
}
void australia(){
    printf("You Are In Australia\n");
    void england();
    england();
    return;
}

