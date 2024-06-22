#include <stdio.h>
int main()
{
    int arr[5] = {5, 2, 1, 3, 4};
    int n = 5;
    int k = 3;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    // Bubble Sort
    for (int i = 0; i < k - 1; i++)
    {
        for (int j = 0; j <= k - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\n");

    printf("%d ", arr[k-1]); 

    return 0;
}