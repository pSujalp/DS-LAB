/*
. Write a program to insert and delete a number in an array that is already sorted.
*/
//Date : 24-08-2023
//Roll.no -2248001 
//Name : Sujal Padmadevarathnam Pullagura

#include<stdio.h>
#include<stdlib.h>

struct array
{
     int * arr= (int*) malloc(sizeof(int));
    int intial_size=1;
    int size=0;
    int e=-1;
     int s=0;
    void push(int d)
    {
        *(arr+(++e))=d;
        ++size;
        arr = (int*) realloc(arr,sizeof(int)*(++intial_size));
        return;  
    }

    int binary_search(int tar)
    {
        for(int i=0;i<size;i++)
        {
            if(*(arr+(i))==tar) return i;
        }
        return -1;
    }

    void erase(int d)
    {
        int pos = binary_search(d);
        if(pos==-1) return;
        for(int i=pos; i<size-1;i++)
        {
            arr[i]=arr[i+1];
        }
        *(arr+e)=0;
        --e;
        --size;
        arr = (int*) realloc(arr,sizeof(int)*(--intial_size));
    }

    void insert(int d)
    {
         int pos1=-1;
         if(size==0) 
         {
            return;
         }
        if(size==1)
        {
          *(arr+(++e))=d;

          if(*(arr)>*(arr+1))
          {
             int t=*(arr);
             *(arr)=*(arr+1);
             *(arr+1)=t;
          }
          ++size;
          arr = (int*) realloc(arr,sizeof(int)*(++intial_size));
          return;
        }
        for(int i=0;i<size-1;i++)
        {
            if(arr[i] <= d && arr[i+1]>d )
            {
                pos1=i+1;
                break;
            }
        }
        for(int i=size-2;i>=0;i--)
        {
           
            if(arr[i] >= d && arr[i+1]<d)
            {
                pos1=i+1;
                break;
               
            }
        }
        if(pos1==-1)
        {
            *(arr+(++e))=d;
            ++size;
            ++e;
            arr = (int*) realloc(arr,sizeof(int)*(++intial_size));
            return;
        }
        for(int i=size-1;i>=pos1;i--)
        {
            *(arr+i+1)=*(arr+i);
        }
        *(arr+pos1)=d;
        ++e;
        ++size;
        arr = (int*) realloc(arr,sizeof(int)*(++intial_size));
    }
    
    void print()
    {
        for(int i=0; i<size; i++)
        {
            printf("%d ",*(arr+i));
        }
    }
};

int main()
{
    array a;
    int x;
    //you must run push atleast once
    //then you can perform insert and remove functions
    //input should be in ascending order or descending order
    int s;
    printf("Enter the size of the array\n");
    scanf("%d",&s);
    printf("Enter the value of the array\n");
    for(int i=0;i<s;i++)
    {
        int x;
        scanf("%d",&x);
        a.push(x);
    }
    int i;
    printf("Enter the value to inserted in sorted array\n");
    scanf("%d",&i);
    a.insert(i);

    printf("Enter the value to deleted in sorted array\n");
    scanf("%d",&i);
    a.erase(i);

    printf("The output will be \n");

    a.print();
    
}