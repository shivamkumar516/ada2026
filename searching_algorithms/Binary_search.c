#include <stdio.h>
void binary_search(int array[], int n, int SE)
{
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (array[mid] == SE)
        {
            printf("Element found at %d index", mid);
            return;
        }
        else if (array[mid] < SE)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }

        
    }
    printf("not found");
}

int main()
{
    int array[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    int SE = 40;
    binary_search(array, 6, 40);
    return 0;
}