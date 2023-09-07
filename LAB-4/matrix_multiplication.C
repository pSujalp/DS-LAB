//Write a program to multiply two matrices
//Name: Sujal Pullagura padmadevarathnam
//roll.no : 2248001
//Section: ECE-B
//Date : 7/09/2023

#include <stdio.h>
#include <stdio.h>




int main() 
{
    int r_a,c_a,r_b,c_b;
    printf("Enter the number of row in matrix A\n");
    scanf("%d", &r_a);
    printf("Enter the number of column in matrix A\n");
    scanf("%d", &c_a);
    printf("Enter the number of row in matrix B\n");
    scanf("%d", &r_b);
    printf("Enter the number of column in matrix B\n");
    scanf("%d", &c_b);
    int matrixA[r_a][c_a];
    int matrixB[r_b][c_b];
    int matrixC[r_a][c_b];

    for(int i = 0; i < r_a; i++)
    {
        for(int j =0;j< c_a; j++)
        {
            printf("Enter the value of %d th row and %d th column of matrix A\n",i,j);
            scanf("%d",&matrixA[i][j]);
        }
    }

    for(int i = 0; i < r_b; i++)
    {
        for(int j =0;j< c_b; j++)
        {
            printf("Enter the value of %d th row and %d th column of matrix B \n",i,j);
            scanf("%d",&matrixB[i][j]);
        }
    }
    


    for (int i = 0; i < r_a; i++) {
        for (int j = 0; j < c_b; j++) {
            int sum = 0;
            for (int k = 0; k < c_a; k++) {
                sum += matrixA[i][k] * matrixB[k][j];
            }
            matrixC[i][j] = sum;
        }
    }
    printf("Result matrix C:\n");
    for (int i = 0; i < r_a; i++) {
        for (int j = 0; j < c_b; j++) {
            printf("%d ", matrixC[i][j]);
        }
        printf("\n");
    }

    return 0;
}

