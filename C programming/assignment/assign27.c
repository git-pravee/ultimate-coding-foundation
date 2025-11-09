/*
1. Write a recursive function to calculate sum of first N natural numbers
2. Write a recursive function to calculate sum of first N odd natural numbers
3. Write a recursive function to calculate sum of first N even natural numbers
4. Write a recursive function to calculate sum of squares of first N natural numbers
5. Write a recursive function to calculate sum of digits of a given number
*/
#include<stdio.h>
int f1(int n)
{
    int sum=0;
    if(n==1)
        return n;
    sum=n+f1(n-1);
    return sum;
}
int f2(int n)
{
    int sum=0;
    if(n==1)
        return 1;
    sum=(n*2-1)+f2(n-1);
    return sum;
}
int f3(int n)
{
    int sum=0;
    if(n==1)
        return 2;
    sum=(n*2)+f3(n-1);
    return sum;
}
int f4(int n)
{
    int sum=0;
    if(n==1)
        return n;
    sum=(n*n)+f4(n-1);
    return sum;
}
int f5(int n)
{
    int sum=0;
    if(n%10==n)
        return n;
    sum=(n%10)+f5(n/10);
    return sum;
}
int main()
{
    printf("%d\n", f5(501));
    return 0;
}