#include <stdio.h>

int main()
{
    int a[20];
    printf("Enter the size of the array :\n");
    int n;
    scanf("%d", &n);
    printf("Enter the array elements :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int b[20];
    int c,num,pos,count=0;
    while (1)
    {
        printf("To start insertion press 1 else press 0 to stop...\n");
        scanf("%d", &c);
        if (c == 0)
            break;
        else
        {
            count++;
            printf("Enter the index \n:");
            scanf("%d", &pos);
            printf("Enter the number :\n");
            scanf("%d", &num);
            for (int i = 0; i < pos; i++)
            {
                b[i] = a[i];
            }
            b[pos] = num;
            for (int i = pos; i < n+count; i++)
            {
                b[i + 1] = a[i];
            }
            for (int i = 0; i < n+count; i++)
            {
                printf("%d\t", b[i]);
            }   
        }
    }
    
}