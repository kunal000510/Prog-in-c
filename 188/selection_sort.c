#include <stdio.h>
int main()
{
    int n, arr[100], min;
    printf("Enter the size of an array : ");
    scanf("%d", &n);

    printf("Enter the elements in an array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    printf("Sorted array:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);

    }

    return 0;
}
