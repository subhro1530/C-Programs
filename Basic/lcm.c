#include<stdio.h>

int main(){
    int n1,n2;
    printf("Enter the numbers :");
    scanf("%d %d", &n1, &n2);
    int max = (n1 > n2) ? n1 : n2;
    while(1)
    {
        if((max%n1==0)&&(max%n2==0))
        {
            printf("LCM of %d and %d is %d", n1, n2, max);
            break;
        }
        ++max;
    }
}