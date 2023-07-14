//  Swap with and without third var

#include <stdio.h>

int main()
{
    printf("Enter the two no's :");
    int a, b;

    //  Without using
    scanf("%d", &a);
    scanf("%d", &b);
    printf("a= %d, b=%d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a= %d, b=%d\n", a, b);

    int c = a;
    a = b;
    b = c;

    printf("a= %d, b=%d\n", a, b);
}