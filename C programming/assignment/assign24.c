#include<stdio.h>
#include "./assign23.c"  // when this use main can only once in any file


// Write a function to print all Prime numbers between two given numbers. (TSRN)
int is_prime(int n);         //declartion and copy the function from assign23 file
// int is_prime(int n)
// {
//     int i;
//     for(i=2;i<n;i++)
//         if(n%i==0)
//             return 0;
//     return 1;
// }
void all_prime_numbers_between_two(int a, int b)
{
    int i;
    for(i=a;i<=b;i++)
        if(is_prime(i))
            printf("%d ",i);
}


// Write a function to print a first N tems of Fibonacci series. (TSRN)
void fib(int n)
{
    int i,a=-1,b=1,c;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}


// Write a function to print PASCAL Triangle. (TSRN)
int fact(int n)
{
    int i, fact=1;
    for(i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}
int combi(int n, int r)
{
    return fact(n)/fact(n-r)/fact(r);
}
void printPascal(int lines)
{
    int i,j,k,n,r;
    for(i=1;i<=lines;i++)
    {
        n=i-1;
        r=0;
        k=1;
        for(j=1;j<=2*lines-1;j++)
        {
            if(j>=lines+1-i && j<=lines-1+i)
            {
                if(k)
                    printf("%3d",combi(n,r++));
                else 
                    printf("   ");
                k=1-k;
            }
            else
                printf("   ");
        }
        printf("\n");
    }
}


// Write a function to print all Armstrong numbers between two given numbers. (TSRN)
int count_digits(int num)
{
    int count=0;
    while(num)
    {
        num=num/10;
        count++;
    }
}
int power(int x, int y)
{
    int p, i;
    for(p=1, i=1;i<=y;i++)
        p=p*x;
    return p;
}
int sum_digits_of_power_n(int num, int n)
{
    int s=0;
    while(num)
    {
        s=s+power(num%10,n);
        num/=10;
    }
}
int isArmstrongNumber(int x)
{
    int n;
    n=count_digits(x);
    if(x==sum_digits_of_power_n(x,n))
        return 1;
    else 
        return 0;
}
void print_all_armstrong_number_between_two_number(int a, int b)
{
    int i;
    for(i=a;i<=b;i++)
    {
        if(isArmstrongNumber(i))
            printf("%d ",i);
    }
}


// write a function to find the sum of first N terms of the series 1!/1+2!/2+3!/3+4!/4+5!/5...n!/n   (TSRS)
// int fact(int n)
// {
//     int fact=1, i;
//     for(i=1;i<=n;i++)
//         fact=fact*i;
//     return fact;
// }
int sum_of_first_N(int n)
{
    int sum=0, i;
    for(i=1;i<=n;i++)
    {
        sum=sum+fact(i)/i;
    }
    return sum;
}

int main()
{
    print_all_armstrong_number_between_two_number(3, 200);
    return 0;
}