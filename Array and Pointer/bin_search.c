#include <stdio.h>

int main()
{
    int a[50], n;
    printf("Enter the size of array :");
    scanf("%d", &n);
    printf("Enter the elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int ub = n - 1;
    int lb = 0, f = 0;
    int num;
    printf("Enter the element to be searched :");
    scanf("%d", &num);
    while (ub >= lb)
    {
        int mid = (ub + lb) / 2;
        if (a[mid] > num)
            ub = mid - 1;
        else if (a[mid] < num)
            lb = mid + 1;
        else if (a[mid] == num)
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
        printf("Element found!");
    else
        printf("Element not found!");
}