#include <stdio.h>

int main(){
    int a[20];
    printf("Enter the size of the array : \n");
    int n;
    scanf("%d", &n);
    printf("Enter the array elements :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int min = 0;
    for (int i = 0; i < n-1; i++)
    {
        min = i;
        for (int j = i+1; j < n; j++)
        {
            if(a[min]>a[j])
            {
                min = j;
            }
        }
        if(min!=i)
        {
            int t = a[min];
            a[min] = a[i];
            a[i] = t;
        }
        
    }
    printf("Sorted array :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}