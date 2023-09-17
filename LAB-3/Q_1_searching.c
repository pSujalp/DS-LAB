/* 1. Write a program to search an element in a 1-D array using Linear Search and Binary Search.*/
//Name: Sujal padmadevaratham Pullagura
//roll.no : 2248001
//Section: ECE-B
//Date : 31/08/2023
#include<stdio.h>
#include<stdlib.h>


int linear_search(int * arr,int target,int s)
{
      for(int i=0;i<s;i++)
      {
          if(arr[i]==target) return i;
      }
      return -1;
}

int binary_search(int * arr,int target,int s)
{    
          int start=0,end=s-1;
          while(start<=end)
          {
               int mid =(start+end)/2;

               if(arr[mid]==target) return mid;

               else if(arr[mid]>target) end=mid-1;

               else if(arr[mid]<target) start=mid+1;
          }
          printf("NOT FOUND");
          return -1;
}

int main()
{
     printf("Enter the size of the array to be searched in binary search \n");
     int s;
     scanf("%d",&s);
      int *arr = (int*) malloc(sizeof(int)*s);
      for(int i=0;i<s;i++)
      { 
         printf("Enter the %d th ",i);
         int x;
         scanf("%d",&x);
        *(arr+i)=x;
      }
       printf("\n Enter the  no. to be searched in an array in binary_search\n");
       int tar;
       scanf("%d",&tar);
      printf("\nThe position of the target is:%d ",binary_search(arr,tar,s));

       int *arr1 = (int*) malloc(sizeof(int)*s);
       printf("\nEnter the size of the new array to be searched in linear search\n");
       scanf("%d",&s);
      for(int i=0;i<s;i++)
      { 
         printf("\nEnter the %d th ",i);
         int x;
         scanf("%d",&x);
        *(arr1+i)=x;
      }
       printf("\nEnter the no. to be searched in an array in linear_search\n");
       tar;
       scanf("%d",&tar);
      printf("\nThe position of the target is:%d ",linear_search(arr1,tar,s));


    
}