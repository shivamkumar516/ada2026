#include <stdio.h>
void insertion(int array[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > temp)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = temp;
    }
    printf("After insertion sort: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
}
int main(){

    int n;
    printf("Enter the NUmber of the elements: ");
    scanf("%d",&n);
    printf("\n");
    int A[n];
    printf("Enter the values: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d element: ",i+1);
        scanf("%d",&A[i]);
    }
  insertion(A,n);
    return 0;
}