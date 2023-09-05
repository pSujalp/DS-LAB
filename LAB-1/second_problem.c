/*
 Write a program to print the positions and values of the largest 
 and second largest numbers of n numbers using arrays.
*/
//Date : 24-08-2023
//Roll.no -2248001 
//Name : Sujal Padmadevarathnam Pullagura
#include<stdio.h>

void bubble_sort1(int * arr,int s)
{
    for(int i = 0; i < s; i++)
    {
        for(int j = i+1; j < s;j++)
        {
            if(arr[i]<arr[j])
            {
                int t=arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
}

int find_1_st_maximum(int * arr,int s)
{
    if(s==0) return 0;
    return arr[0];

}
int find_2_nd_maximum(int * arr,int s)
{
    if(s==1) return arr[0];

    return arr[1];
}

void display_array(int * arr,int s)
{
    for(int i = 0; i<s; i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int s;
    printf("enter the number of elements\n");
    scanf("%d",&s);

    int arr[s];
    printf("enter the values of elements\n");
    for (int i = 0; i < s; i++)
    {
        scanf("%d",&arr[i]);
    }
    bubble_sort1(arr,sizeof(arr)/sizeof(arr[0]));

    printf("The Maximum 1'st number is - %d \n",find_1_st_maximum(arr,sizeof(arr)/sizeof(arr[0])));

    printf("The Maximum 2'nd number is - %d\n",find_2_nd_maximum(arr,sizeof(arr)/sizeof(arr[0])));

    display_array(arr,sizeof(arr)/sizeof(arr[0]));


    
}