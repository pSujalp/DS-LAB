/* 1. Write a program to search an element in a 1-D array using Linear Search and Binary Search.*/
//Name: Sujit K
//roll.no : 2248003
//Section: ECE-B
//Date : 31/08/2023

#include <stdio.h>

int linear_search(int * arr,int tar,int s)
{
    for(int i=0;i<s;i++)
    {
        if(arr[i]==tar) return i;
    }
    return -1;
    
}

int main()
{
    int s;
    printf("Enter the number of elements\n");
    scanf("%d",&s);
    int arr[1000];
    printf("Enter the element for array\n");
    for(int i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be searched in an array\n");
    int tar;
    scanf("%d",&tar);
    ("the position of tar array is :%d \n",linear_search(arr,tar,s));

}