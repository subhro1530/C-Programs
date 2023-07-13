/*
    1
   222
  33333
 4444444
555555555
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the length of pattern :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        // For spaces
        for (int k = n - 1; k >= i; k--)
        {
            printf(" ");
        }

        for (int j = 1; j <= (i - 1) * 2 + 1; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}