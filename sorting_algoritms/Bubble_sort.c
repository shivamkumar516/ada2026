#include<stdio.h>
void bubble(int array[], int n){
    int i,j;
    for (int i = 0; i < n-1; i++)
    {
        int flag=0;
        for (j = 0; j < n-1-i; j++)
        {
           if(array[j]>array[j+1]){
            int temp;
            temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
            flag=1;

           }
        }
        if(flag==0){
            break;
        }
    }
    printf("After bubble sort: \n");
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
    bubble(A,n);
    return 0;
}