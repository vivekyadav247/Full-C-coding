#include <stdio.h>

int main()
{
    int x;
    printf("ENTER the size : ");
    scanf("%d",&x);
    int arr[x] ;
    for(int i=0;i<=x-1;i++){
        printf("Enter element no. %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int i, j;

    for (i = 0, j = x - 1; i < j; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            printf("Not a palindrome\n");
            return 0;
        }
    }

    printf("Palindrome\n");
    return 0;
}