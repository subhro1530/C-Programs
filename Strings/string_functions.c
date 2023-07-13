#include <stdio.h>
#include <string.h>

int main()
{

    // In the Strings chapter, we used sizeof to get the size of a string / array.Note that sizeof and strlen behaves differently, as sizeof also includes the \0 character when counting :
    // char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // printf("%d", strlen(alphabet)); // 26
    // printf("%d", sizeof(alphabet)); // 27

    // It is also important that you know that sizeof will always return the memory size(in bytes), and not the actual string length:
    // char str[50];
    // printf("Enter the string :");
    // gets(str);
    // printf("%d", sizeof(str));

    // char str1[] = "Hello ";
    // char str2[] = "World!";

    // Concatenate str2 to str1 (result is stored in str1)
    // strcat(str1, str2);

    // Print str1
    // printf("%s", str1);

/*
    char str1[20] = "Hello World!";
    char str2[20];

    int n = 50;
    char str[50];

    sprintf(str, "%d", n);  //  Convert int n to string str
    printf("%s", str);  
    printf("%d", strlen(str));

    // Copy str1 to str2
    strcpy(str2, str1);

    // Print str2
    printf("%s", str2);
    */

    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hi";

    // Compare str1 and str2, and print the result
    printf("%d\n", strcmp(str1, str2)); // Returns 0 (the strings are equal)

    // Compare str1 and str3, and print the result
    printf("%d\n", strcmp(str1, str3)); // Returns -4 (the strings are not equal)
}