#include<stdio.h>

void swap(int a, int b)
{
    int t=a;
    a=b;
    b=t;
}
void selection_sort(int *arr,int size)
{
    int i, j, min_idx;
 
    // One by one move boundary of
    // unsorted subarray
    for (i = 0; i < size-1; i++) {
 
        // Find the minimum element in
        // unsorted array
        min_idx = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
 
        // Swap the found minimum element
        // with the first element
        if (min_idx != i) swap(arr[min_idx], arr[i]);
    }
}
void bubble_sort(int *arr,int size)
{
    
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size;j++)
        {
            if(arr[j]<arr[i])
            {
                int t=arr[j];
                arr[j]=arr[i];
                arr[i]=t;
            }
        }

    }
}
void print_array(int *arr,int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int arr[]={1,200,89,9,3};
    bubble_sort(arr,5);
    print_array(arr,5);
}