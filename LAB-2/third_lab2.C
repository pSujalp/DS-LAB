
/*
. Write a program to merge two unsorted arrays.
*/
//Date : 24-08-2023
//Roll.no -2248001 
//Name : Sujal Padmadevarathnam Pullagura

#include<stdio.h>
#include<stdlib.h>

struct array
{
     int f_size,s_size,total;
     int * arr1 = (int*) malloc(sizeof(int));
    void merging_of_arr()
    {
        
        printf("enter the size of  first array \n");
        scanf("%d",&f_size);
        arr1 = (int*) realloc(arr1,sizeof(int)*(f_size));
        printf("enter the elements of first array \n");
        for(int i=0;i<f_size;i++)
        {
            int x;
            scanf("%d",&x);
            *(arr1+i) = x;
        }
        printf("enter the size of second array \n");
        scanf("%d",&s_size);
        total =f_size+s_size;
        arr1 = (int*) realloc(arr1,sizeof(int)*(f_size+s_size));
        printf("enter the elements of second array \n");

        for(int i=f_size;i<total;i++)
        {
            int x;
            scanf("%d",&x);
            *(arr1+i)=x;
        }
    }
    void print()
    {
        printf("The final display of array will be \n");
        for(int i=0;i<total;i++) printf("%d ",*(arr1+i));
    }

};

int main()
{
    array v;
    v.merging_of_arr();
    v.print();
}