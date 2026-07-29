#include <stdio.h>///Using Pivot

int partition(int array[], int start, int end)
{

    int pivot = array[end];
    int index = start - 1;
    for (int j = start; j < end; j++)
    {
        if (array[j] <= pivot)
        {
            index++;
            int temp = array[j];
            array[j] = array[index];
            array[index] = temp;
        }
    }
    index++;
    int temp = array[end];
    array[end] = array[index];
    array[index] = temp;

    return index;
}

void quick_sort(int array[], int start, int end)
{
    if (start < end)
    {
        int pivotIndex = partition(array, start, end);
        quick_sort(array, start, pivotIndex - 1);
        quick_sort(array, pivotIndex + 1, end);
    }
}
int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = 6;

    quick_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}