/*2. Write a program to input n numbers in an array and print the sum of only those whose tenth-place digit is divisible by 5.*/
//Name: Sujal padmadevaratham Pullagura
//roll.no : 2248001
//Section: ECE-B
//Date : 31/08/2023
#include<stdio.h>
#include<stdlib.h>

int sum_divisible_by_five(int * arr,int s)
{        

       int sum=0;
       for(int i=0;i<s;i++)
       {        
              int j=arr[i];
              j=j/10;
              int t=j%10;
              if(t%5==0) sum+=arr[i];
       }
       return sum;
}

int main()
{      
      printf("Enter the no.of elements\n");
      int s;
      scanf("%d",&s);
      int * arr =(int*) malloc(sizeof(int)*s);
      for(int i=0;i<s;i++)
      { 
          int x;
          scanf("%d",&x);
          *(arr+i)=x;
      }
      printf("\nSum of divisble by 5 in tenth position is- %d ",sum_divisible_by_five(arr,s));
}