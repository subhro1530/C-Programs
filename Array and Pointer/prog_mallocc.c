#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, row, col, n;
    double *a,*b;

    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf(" %d", &col);
    n = row * col;

    a = (double *)malloc(n * sizeof(double));
    b = (double *) malloc(n * sizeof(double));

    printf("Enter the numbers of First Matrix, A:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%lf", (a + col * i + j));
        }
    }
    printf("Enter the numbers of Second Matrix, B:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%lf", (a + col * i + j));
        }
    }

    printf("A:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%lf ", *(a + col * i + j));
        }
        printf("\n");
    }

    free(a);
    return 0;
}