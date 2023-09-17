//Write a program to implement a selection sort and Bubble sort.
//Name: Sujit Kumar
//roll.no : 2248003
//Section: ECE-B
//Date : 10/09/2023
#include<stdio.h>
void selection_sort(int *arr,int size)
{
    int i, j, min_idx;
 
    for (int i = 0; i < size; i++) 
    {
        min_idx = i;
        for (int j = i + 1; j < size; j++) 
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
    printf("Bubble sort: \n");
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5;j++)
        {
            if(arr[j]<arr[i])
            {
                int t=arr[j];
                arr[j]=arr[i];
                arr[i]=t;
            }
        }

    }
   
   int arr1[]={1,200,890,9,3};
    int min_idx;
    for(int i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }
    for (int i = 0; i < 5; i++) 
    {
        min_idx = i;
        for (int j = i + 1; j < 5; j++) 
        {
            if (arr1[j] < arr1[min_idx]) min_idx = j;
        }
        if (min_idx != i)
        {
            int t=arr1[min_idx];
            arr1[min_idx] = arr1[i];
            arr1[i] = t;
        }
    }
    printf("\n");
     printf("selection sort: \n");
    for(int i=0; i<5; i++)
    {
        printf("%d ",arr1[i]);
    }
    

}