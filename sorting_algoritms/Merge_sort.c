#include <stdio.h>

void merge(int array[], int start, int mid, int end)
{
    int temp[end -start + 1];
    int i = start;
    int j = mid + 1;
    int k=0;
    while (i <= mid && j <= end)
    {
        if (array[i] < array[j])
        {
            temp[k] = array[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = array[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
       temp[k] = array[i];
            i++;
            k++;
    }
    while (j <= end)
    {
        temp[k] = array[j];
            j++;
            k++;
    }
    for (int i = 0; i <k; i++)
    {
        array[start+i] = temp[i];
    }
}
void Merge_sort(int array[], int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        Merge_sort(array, start, mid);
        Merge_sort(array, mid + 1, end);
        merge(array, start, mid, end);
    }
}
int main()
{
    int arr[] = {5, 2, 9, 1, 6};
    int n = 5;

    Merge_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}