/*2. Write a program to input n numbers in an array and print the sum of only those whose tenth-place digit is divisible by 5.*/
//Name: Sujit Kumar
//roll.no : 2248003
//Section: ECE-B
//Date : 31/08/2023
#include<stdio.h>

int main()
{      
       int arr[5];
      printf("Enter the no.of elements\n");
      int s;
      scanf("%d",&s);
      arr[s];
      for(int i=0;i<s;i++)
      { 
          int x;
          scanf("%d",&x);
          arr[i]=x;
      }
             int sum=0;
       for(int i=0;i<s;i++)
       {        
              int j=(arr[i]/10)%10;
              if(j%5==0) sum+=arr[i];
       }
      printf("\nSum of divisble by 5 in tenth position is- %d ",sum);
}
