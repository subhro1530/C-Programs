#include <stdio.h>
#include <math.h>

int count(int n)
{
    int c = 0;
    while (n > 0)
    {
        c++;
        n = n / 10;
    }
    return c;
}
int main()
{
    int oct;
    printf("Enter the octal number :");
    scanf("%d", &oct);
    int s = 0;
    printf("%d", count(oct));
    for (int i = 0; i <= count(oct); i++)
    {
        s += oct % 10 * (int)pow(8, i);
        oct = oct / 10;
    }
    printf("The decimal equivalent is : %d", s);
}