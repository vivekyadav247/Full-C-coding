#include <stdio.h>
#include <limits.h>
int main()
{

    int arr[5] = {5,4,3,2,1};
    int n = 5;

    printf("Unsorted Array is -: ");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    for (int i = 1; i <= n - 1; i++)
    {
        int j=i;
        while(arr[j]<arr[j-1] && j>=1){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    printf("\n");
    printf("Sorted Array is -: \n");

    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}