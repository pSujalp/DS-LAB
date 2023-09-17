//Write a program to implement the insertion sort
//Name:Sujal Padmadevarathnam Pullagura
//Roll.no : 2248001
//Date:14/09/2023
#include <stdio.h>
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void print(int arr[], int n)
{
    for(int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
}

int main()
{   
    
    int arr[]={2,34,23,2,33,4,234,324,23};
    printf("Array before sorting \n");
    print(arr,sizeof(arr)/sizeof(arr[0]));
    printf("\nArray after sorting \n");
    insertionSort(arr,sizeof(arr)/sizeof(arr[0]));
    print(arr,sizeof(arr)/sizeof(arr[0]));
}