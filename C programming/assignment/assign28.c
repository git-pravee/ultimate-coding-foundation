/*
1. Write a recursive function to calculate factorial of given number
2. Write a recursive function to calculate HCF of two numbers
3. Write a recursive function to print first N terms of Fibonacci series
4. Write a program in C to count the digits of given number using recursion
5. Write a program in C to calculate the power of any number using recursion
*/
#include<stdio.h>
int f1(int n)
{
    int fact = 1;
    if(n==1)
        return 1;
    fact = n * f1(n-1);
    return fact;
}
int f2(int a, int b)
{
    if(b==0)
        return a;
    return f2(b, a%b);
}
int fib(int n)
{
    if(n<=1)
        return n;
    return fib(n-1)+fib(n-2);
}
void f3(int n)
{
    for(int i=0; i<n; i++)
        printf("%d ", fib(i));
}
void printFibo(int n, int a, int b)
{
    if(n>=0){
        printf("%d ", a+b);
        printFibo(n-1, b, a+b);
    }
}
int f4(int n)
{
    if(n%10==0) 
        return 0;
    return 1+f4(n/10); 
}
int f5(int a, int n)
{
    if(n==1)
        return a;
    return a * f5(a, n-1);
}
int main()
{
    printFibo(10, -1, 1);
    printf("\n");
    return 0;
}