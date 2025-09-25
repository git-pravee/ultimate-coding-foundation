/*
1. Write a function to calculate the factorial of a number. (TSRS)
2. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
3. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
4. Write a function to check whether a given number contains a given digit or not. (TSRS)
5. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)
*/
#include<stdio.h>
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
int arr(int n , int r)
{
    return fact(n) / fact(n-r);
}
int checkDigit(int n, int digit)
{
    int temp=n;
    while(temp)
    {
        if(digit==temp%10)
            return 1;
        temp=temp/10;
    }
    return 0;
}
// Trial Division with √n Optimization
int isPrime(int n)
{
    int i;
    if(n<=1)
        return 0;
    if(n==2)
        return 1;
    for(i=2;i*i<=n;i++)
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
void printPrimeFactor(int n)
{
    int i=2;
    int temp=n;
    while(temp>1)
    {
        if(temp%i==0)
        {
            printf("%d ", i);
            temp=temp/i;
        }
        else
            i=nextPrime(i);
    }
}
int main()
{
    printPrimeFactor(7);
    printf("\n");
}