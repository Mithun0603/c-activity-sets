//2. Write a C program to add two numbers.
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter a number\n");
    scanf("%d %d", &a,&b);
    c=a+b;
    printf("sum of the two numbers is: %d\n",c);
    return 0;
}
