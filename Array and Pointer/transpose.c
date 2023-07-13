#include <stdio.h>

int main(){
    int a[10][10],trans[10][10];
    printf("Enter the size of the matrix :\n");
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);
    printf("Enter elements to the matrix :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    printf("Matrix :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose is :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            trans[i][j] = a[j][i];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }
    
}
