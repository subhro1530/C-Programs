#include<stdio.h>
#include<math.h>

int rev(int n){
    int s = 0;
    while (n>0)
    {
        int p = n % 10;
        s = s * 10 + p;
        n = n / 10;
    }
    return s;
}
int main(){
    int dec,s=0;
    printf("Enter the decimal number :");
    scanf("%d", &dec);
    while(dec>0)
    {
        int p = dec % 8;
        s = s * 10 + p;
        dec = dec / 8;
    }
    printf("Octal is : %d", rev(s));
}