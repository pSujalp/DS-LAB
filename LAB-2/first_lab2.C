/*
Write a program to insert an element and delete
an element at specified positions in an array.
*/
//Date : 24-08-2023
//Roll.no -2248001 
//Name : Sujal Padmadevarathnam Pullagura

#include<stdio.h>
#include<stdlib.h>

struct Vector
{
    int * arr = (int*) malloc(sizeof(int));
    int size=0;
    int e=-1;
    int intial_size=1;
    int s=0;

    void push(int d)
    {
        if(size==0)
        {
            free(arr);
            intial_size=1;
             arr = (int*) malloc(sizeof(int));
             e=-1;
             s=0;
        }
        *(arr+(++e))=d;
        ++size;
        arr = (int*) realloc(arr,sizeof(int)*(++intial_size));
        return;
    }
    void print()
    {
        for(int i=s;i<size;i++)
        {
            printf("%d ", *(arr+i)); 
        }
    }
    void erase(int i)
    {
        if(size==0) return;

        if(i>=0 && i<size)
        {
        for(int j=i;j<size-1;j++)
        {
             *(arr+j)=*(arr+j+1);
        }
        *(arr+e) = 0;
        arr = (int*) realloc(arr,sizeof(int)*(--intial_size));
        --e;
        size--;
        }
    }
    void insert(int i, int d)
    {
       if(size==0) push(d);
       if(i>=0 && i<size)
       {
        arr = (int*) realloc(arr,sizeof(int)*(intial_size++));
        for(int j=size-1;j>=i;j--)
        {
            arr[j+1]=arr[j];
        }
        arr[i]=d;
        size++;
        ++e;
       }
    } 
   
};

int main()
{
    Vector v;
    printf("Enter the number of elements to be entered: \n");
    int s;
    scanf("%d",&s);
    printf("Enter the values to be entered: \n");
    for(int i=0;i<s;i++)
    {
        int x;
        scanf("%d",&x);
        v.push(x);
    }
    printf("Enter the position to be deleted in an array between 0 and %d: \n",s-1);
    int pos;
    scanf("%d",&pos);
    v.erase(pos);

    printf("Enter the position to be inserted in an array: \n");
    int pos1;
    scanf("%d",&pos1);
    int val;
    printf("Enter the value to be inserted in %d an array: \n",pos1);
    scanf("%d",&val);
    v.insert(pos1,val);

    printf("The final display is : \n");

    v.print();



}