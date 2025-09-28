/*
1. Write a function to calculate LCM of two numbers. (TSRS)
2. Write a function to calculate HCF of two numbers. (TSRS)
3. Write a function to check whether a given number is Prime or not. (TSRS)
4. Write a function to find the next prime number of a given number. (TSRS)
5. Write a function to print first N prime numbers. (TSRN) 
*/
#include<stdio.h>
int hcf(int a, int b);
/*
int lcm(int a, int b)
{
    for(int i=a>b?a:b; i<=a*b; i++)
    {
        if(i%a==0 && i%b==0)    
        {
            return i;
        }
    }
}
*/
int lcm(int a, int b)
{
    return a*b/hcf(a,b);
}
// Euclidean Algorithm
int hcf(int a, int b)
{
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
// Trial Division using √n optimization
int isPrime(int n)
{
    for(int i=2; i*i<=n; i++)
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
void printPrime(int n)
{
    int temp=2, i=1;
    while(i<=n)
    {
        printf("%d ", temp);
        temp=nextPrime(temp);
        i++;
    }
}
int main()
{
    printPrime(10);
    printf("\n");
    return 0;
}