#include<stdio.h>

// Write a recursive funtion to calculate sum of first n natural numbers
int sumN(int n)
{
    int s;
    if(n==1)
        return 1;
    s=n+sumN(n-1);
    return s;
}


// Write a recursive funtion to calculate sum of first n odd natural numbers
int sumNOdd(int n)
{
    int s;
    if(n==1)
        return 1;
    s=n*2-1+sumNOdd(n-1);
    return s;
}


// Write a recursive funtion to calculate sum of first n even natural numbers
int sumNEven(int n)
{
    int s;
    if(n==0)
        return 0;
    s=n*2+sumNEven(n-1);
    return s;
}


// Write a recursive funtion to calculate sum of squares of first n natural numbers
int sumNSquare(int n)
{
    int s;
    if(n==1)
        return 1;
    s=n*n+sumNSquare(n-1);
    return s;
}

// Write a recursive funtion to calculate sum of digits of a given number
int sumNDigit(int n)
{
    int s;
    s=n%10;
    if(n>0)
        s=s+sumNDigit(n/10);
    return s;
}


int main()
{
    int a=sumNDigit(123);
    printf("%d",a);
    return 0;
}