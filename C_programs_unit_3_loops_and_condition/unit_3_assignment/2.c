// Questio-2 Write a program to find maximum of two numbers.

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter value of a :");
    scanf("%d", &a);
    printf("Enter value of b :");
    scanf("%d", &b);
    if (b < a)
    {
        printf("Number in a is greater than number in b");
    }
    else
    {
        printf("Number in b is greater than number in a");
    }
}