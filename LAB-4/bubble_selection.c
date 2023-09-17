//Write a program to implement a selection sort and Bubble sort.
//Name: Sujal Pullagura padmadevarathnam
//roll.no : 2248001
//Section: ECE-B
//Date : 7/09/2023
#include<stdio.h>
void selection_sort(int *arr,int size)
{
    int i, j, min_idx;
 
    for (i = 0; i < size; i++) 
    {
        min_idx = i;
        for (j = i + 1; j < size; j++) 
        {
            if (arr[j] < arr[min_idx]) min_idx = j;
        }
        if (min_idx != i)
        {
            int t=arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = t;
        }
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
    printf("\nSelection sort of array\n");
    selection_sort(arr,5);
    print_array(arr,5);
    printf("\nBubble sort of array\n");
    bubble_sort(arr,5);
    print_array(arr,5);

}