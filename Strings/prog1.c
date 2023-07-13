// C program to get the length of a string using pointers
#include <stdio.h>

int main()
{

    char str[100], *ptr;
    int count;

    printf("Enter any string: ");
    gets(str);

    // ptr pointing to first char of string
    ptr = str;
    printf("ptr=%p\n", ptr);
    // Initialize count to zero
    count = 0;

    // Run until null character is reached
    while (*ptr != '\0')
    {
        count++;
        ptr++;
        printf("ptr=%p\n", ptr);
    }
    printf("The length of the string is: %d", count);

    return 0;
}