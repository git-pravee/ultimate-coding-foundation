/*
1. Write a recursive function to print N even natural numbers in reverse order
2. Write a recursive function to print squares of first N natural numbers
3. Write a recursive function to print binary of a given decimal number
4. Write a recursive function to print octal of a given decimal number
5. Write a recursive function to print reverse of a given number
*/
#include<stdio.h>
void f1(int n)
{
    if(n==1)
    {
        printf("%d ", n*2);
        return;
    }
    printf("%d ", n*2);
    f1(n-1);
}
void f2(int n)
{
    if(n==1)
    {
        printf("%d ", n*n);
        return;
    }
    f2(n-1);
    printf("%d ", n*n);
}
void f3(int n)
{
    if(n==1)
    {
        printf("1");
        return;
    }
    f3(n/2);
    if(n%2==0)
        printf("0");
    else
        printf("1");
}
void f4(int n)
{
    if(n<=7)
    {
        printf("%d", n);
        return;
    }
    f4(n/8);
    if(n%8==0)
        printf("%d", 0);
    else
        printf("%d", n%8);
}
void f5(int n)
{
    if(n%10==n)
    {
        printf("%d", n);
        return;
    }
    printf("%d", n%10);
    f5(n/10);
}
int main()
{
    f5(10);
    printf("\n");
    return 0;
}