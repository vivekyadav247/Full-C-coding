#include <stdio.h>
int main()
{
    typedef struct Cricketer
    {
        char name[40];
        int age;
        int matches;
        float avgruns;
    } Cricketer;

    int x;
    x = 1;
    Cricketer arr[x];
    for (int i = 0; i < x; i++)
    {
        arr[i].name;
        printf("Enter the Name of Cricketer : ");
        gets(arr[i].name);
        arr[i].age;
        printf("Enter the Age of Cricketer : ");
        scanf("%d", &arr[i].age);
        arr[i].matches;
        printf("Enter the Number of Matches of Cricketer : ");
        scanf("%d", &arr[i].matches);
        arr[i].avgruns;
        printf("Enter the Average of Cricketer : ");
        scanf("%f", &arr[i].avgruns);
        printf("\n");
    }

    for (int i = 0; i < x; i++)
    {
        printf("Name : %s\n", arr[i].name);
        printf("Age : %d\n", arr[i].age);
        printf("Number of Matches : %d\n", arr[i].matches);
        printf("Average : %f\n", arr[i].avgruns);
        printf("\n");
    }
    return 0;
}