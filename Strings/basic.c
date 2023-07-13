#include <stdio.h>

int main(){
    int val = 50;
    int *ptr = &val;
    // int *ptr1 = val;
    printf("val= %d\n", val);
    printf("&val= %d\n", &val);
    printf("*ptr= %d\n", *ptr);
    // printf("*ptr1=", *ptr1);
    printf("&*ptr= %d\n", &*ptr);
    printf("*&*ptr= %d\n", *&*ptr);

    int addr = (int *)6422296;
    printf("At addr, value = %d", addr);
}

/*
Output:-

val= 50
&val= 6422296
*ptr= 50
&*ptr= 6422296
*&*ptr= 50

*/

/*
Conclusion:-

val = *ptr
&val=&*ptr

*/