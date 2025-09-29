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
    
}
int main()
{
    primeBetween(0, 10);
    printf("\n");
    return 0;
}