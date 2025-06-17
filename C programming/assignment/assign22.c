#include<stdio.h>

// write a function to calculate the factorial of a number.(TSRS)

int fact(int n)
{
    int i, fact=1;
    for(i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}


// write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
int combi(int n, int r)
{
    return fact(n)/fact(n-r)/fact(r);
}


// Write a function to calculate the number of arragements one can make from n items and r selected at a time. (TSRS)
int permu(int n, int r)
{
    return fact(n)/fact(n-r);
}


// Write a function to check whether a given number contains a given digit or not. (TSRS)
int containsDigit(int num, int digit)
{
    while(num)
    {
        if(num%10==digit)
            return 1;
        num/=10;
    }
    return 0;
}


// Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2,2,3,3. (TSRN) 
int is_prime(int n)
{
    int i=2;
    for(i=2;i<n;i++)
        if(n%i==0)
            return 0;
    return 1;
}
int nextPrime(int num)
{
    while(!is_prime(++num));
    return num;
}
void print_all_prime_factors(int n)
{
    int i=2;
    while(n>1)
    {
        while(n%i==0)
        {
            printf("%d ",i);
            n/=i;
        }
        i=nextPrime(i);
    }
}
// int main()
// {
//     // p1
//     // printf("%d",p1(5));

//     // p2
// print_all_prime_factors(36);
//     return 0;
// }