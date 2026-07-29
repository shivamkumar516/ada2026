#include<stdio.h>
void linear_search(int array[],int n, int target){
    int flag=0;
    int index;
    for (int i = 0; i < n; i++)
    {
       if(array[i]==target){
        index=i;
        flag=1;
        break;
       }
    }
    if(flag==0){
        printf("Element not present");
    }
    else{
        printf(" The target element is at %d index",index);
    }
}

int main(){
    int n;
    printf("number of element in array: ");
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("[%d] element:",i+1);
        scanf("%d",&array[i]);
    }
    int target;
    printf("enter the search element: ");
    scanf("%d",&target);
    linear_search(array,n,target);
    return 0;
}