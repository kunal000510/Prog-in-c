#include <stdio.h>

void quickSort(int arr[], int p, int q)
{
    if (p >= q)
    {
        return;
    }
    int pivot = arr[p];
    int i = p;
    int j = q;
    int temp;
    while (i < j)
    {
        while (arr[i] <= pivot && i < q)
        {
            i++;
        }
        while (arr[j] > pivot && j > p)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[p];
    arr[p] = arr[j];
    arr[j] = temp;
    quickSort(arr, p, j - 1);
    quickSort(arr, j + 1, q);
}
int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = 6;
    quickSort(arr, 0, n - 1);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
