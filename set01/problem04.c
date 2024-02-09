#include <stdio.h>
void input(int *a,int *b);
void add(int *a, int *b,int *sum);
void output(int a,int b,int sum);
int main()
{
    int num1,num2,sum;
    input(&num1,&num2);
    add(num1,num2,&sum)
    sum=add(a,b,sum);
    output(a,b,sum);
    return 0;
}
int input()
{
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    return num;
}
int add(int a,int b,int sum)
{
    sum=a+b;
    return sum;
}
void output(int a,int b, int sum)
{
    printf("the sum is %d\n",sum);
}