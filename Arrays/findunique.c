#include <stdio.h>
int main()
{
    int arr[7] = {1, 2, 3, 4, 3, 2, 1};
    int x;
    printf("Enter the Number to find in array : ");
    scanf("%d", &x);
    int y = x;
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (arr[i] == arr[j])
            {
                x = 1;
            }
        }
    }
    if (x == 1)
        printf("%d is the unique in this array\n ", y);
    else
        printf("%d is not unique in this array ", y);

    return 0;
}