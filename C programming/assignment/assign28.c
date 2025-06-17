#include<stdio.h>


// Write a recursive funtion to calculate factorial of a given number
int fact(int n)
{
    int f;
    if(n==0)
        return 1;
    f=n*fact(n-1);
    return f;
}


// Write a recursive funtion to calculate HCF of two numbers
int hcf(int a, int b)
{
    if(a>b)
    {
        if(a%b==0)
            return b;
        return hcf(a%b,b);
    }
    else
    {
        if(b%a==0)
            return a;
        return hcf(a,b%a);
    }
}


// Write a recursive function to print first N terms of Fibonacci series
int fib(int n)
{
    if(n==0 || n==1)
        return n;
    return fib(n-1) + fib(n-2);
}
void printFib(int n)
{
    int i;
    for(i=0;i<=n;i++)
        printf("%d ",fib(i));
}


// Write a program in c to count the digits of a given number using recursion
int countDigit(int n)
{
    int count=0;
    if(n>0)
    {
        count=1;
        count=count+countDigit(n/10);
    }
    return count;
}


// Write a program in C to calculate the power of any number using recursion
int power(int base, int index)
{
    if(index>1)
        base=base*power(base, index-1);
    return base;
}
int main(){
    int n=power(4,4);
    printf("%d",n);
    return 0;
}