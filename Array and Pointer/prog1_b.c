//  C program to add and subtract two matrices using pointer and malloc() function.
//  With Malloc :

/* This program asks the user for 2 matrices called A and B, as integers,
   and displays their sum, C. The max dimension of each matrix is 100. */

#include <stdio.h>
#include <stdlib.h>

// Construct function
void construct()
{
    int m, n, i, j;            // m = rows; n = columns
    int *first, *second, *sum; // first = matrix1; second = matrix2

    printf("Please enter the number of rows: ");
    scanf("%d", &m);
    printf("Please enter the number of columns: ");
    scanf("%d", &n);

    first = (int *)malloc(m * n * sizeof(int));
    second = (int *)malloc(m * n * sizeof(int));
    sum = (int *)malloc(m * n * sizeof(int));

    // User enters m x n amount whole numbers for the Matrix A
    printf("Enter Matrix A\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", *(*(first + i) + j));

    // User enters m x n amount whole numbers for the Matrix B
    printf("Enter Matrix B\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", second[i][j]);
 
 
   // Adds the sum of Matrix A and Matrix B
   for (i = 0; i < m; i++)
      for (j = 0; j < n; j++)
         *(sum[i][j])= *(first[i][j]) + *(second[i][j]);
 
 
// Display the sum of Matrix A and Matrix B
   printf("A + B =\n");
   for (i = 0; i < m; i++)
   {
                for (j = 0; j < n; j++)
                    printf("%d ", *(sum + i + j));

                printf("\n");
   }
 
 
   return ;
}

// Main Function
int main()
{
    construct(); // Calls construct function
    return 0;
}