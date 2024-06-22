// Time and Space Complexity ka dhyan rakhte hue
#include <stdio.h>
int main()
{
    int arr[9] = {5, 0, 2, 0, 0, 4, 1, 3, 0};

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j <= 8; j++)
            if (arr[j] == 0)
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    }
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}