/*
1. Write a function to print all prime numbers between two given numbers. (TSRN)
2. Write a function to print first N terms of Fibonacci series. (TSRN)
3. Write a function to print PASCAL Triangle. (TSRN)
4. Write a function to print all Armstrong numbers between two given numbers. (TSRN)
5. Write a function to find the sum of first N terms of the series 1!/1+2!/2+3!/3+4!/4+5!/5...n!/n (TSRS)
*/
#include<stdio.h>
int isPrime(int n)
{
    if(n<=1)
        return 0;
    int i=2;
    for(i;i*i<=n;i++)
        if(n%i==0)
            return 0;
    return 1;
}
int nextPrime(int n)
{
    while(n)
        if(isPrime(++n))
            return n;
}
void primeBetween(int a, int b)
{
    while(a<=b)
    {
        if(isPrime(a))
        {
            printf("%d ", a);
            a++;
        }
        else
            a=nextPrime(a);
    }
}
void printFib(int n)
{
    int a=0, b=1, c;
    printf("Printing %dth terms Fib..\n", n);
    for(int i=1; i<=n; i++)
    {
        printf("%d ", a);
        c=a+b;
        b=a;
        a=c;
    }
}
int fact(int n)
{
    int fact=1;
    for(int i=1; i<=n; i++)
        fact=fact*i;
    return fact;
}
int combi(int n, int r)
{
    return fact(n) / (fact(r) * fact(n-r));
}
void pascal(int n)
{
    int i, j, k;
    for(i=1; i<=n; i++)
    {
        k=1;
        int col=0;
        for(j=1; j<=n*2-1; j++)
        {
            if(j>=n-i+1 && j<=n+i-1)
            {
                if(k==1)
                {
                    printf("%d  ", combi(i-1, col));
                    k=0;
                    col++;
                }
                else
                {
                    printf("   ");
                    k=1;
                }
            }
            else
                printf("   ");
        }
        printf("\n");
    }
}
int arm(int n)
{
    int temp=n, digits=0, digit, sum=0, pow;
    {
        while(temp)
        {
            temp=temp/10;
            digits++;
        }
        temp=n;
        while(temp)
        {
            pow=1;
            digit=temp%10;
            temp=temp/10;
            for(int i=1; i<=digits; i++)
            {
                pow=pow*digit;
            }
            sum=sum+pow;
        }
        if(n==sum)
            return 1;
        else 
            return 0;
    }
}
void printArm(int a, int b)
{
    printf("Armstrong number: ");
    while(a!=b+1)
    {
        if(arm(a))
            printf("%d ", a);
        a++;
    }
}
void f5(int n)
{
    int sum=0;
    while(n)
    {
        sum=sum+fact(n)/n;
        n--;
    }
    printf("%d", sum);
}
int main()
{
    f5(11);
    printf("\n");
    return 0;
}