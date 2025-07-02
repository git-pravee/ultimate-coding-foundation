/*
1. Write a program to find the Nth term of ther Fibonacci series. 
2. Write a program to print first N terms of Fibonacci series. 
3. Write a program to check whether a given number is there in the Fibonacci series or not. 
4. Write a program to check whether a given number is an Armstrong number on not. 
5. Write a program to print all Armstrong numbers under 1000.
*/
#include<stdio.h>
int fib(int n)
{
    if(n==0)
        return 0;
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int power(int n, int digit)
{
    int result = 1;
    while (digit)
    {
        result = result * n;
        digit--;
    }
    return result;
}
void p1()
{
    int n;
    printf("Enter a non-negative number: ");
    scanf("%d", &n);
    printf("%dth of the fibonacci series: %d", n, fib(n));
}
void p2()
{
    int n, i=0;
    printf("Enter a non-negative number: ");
    scanf("%d", &n);
    printf("First %d terms of Fibonacci series: ", n);
    while(i<n)
    {
        printf("%d ", fib(i));
        i++;
    }
}
void p3()
{
    int n, i=0;
    printf("Enter a non-negative number: ");
    scanf("%d", &n);
    while(fib(i)<=n)
    {
        if(n==fib(i))
        {
            printf("Fibonacci series number");
            return;
        }
        i++;
    }
    printf("Not fibonacci series number");
}
void p4()
{
    int n, digits=0, result=0;
    printf("Enter a non-negative number: ");
    scanf("%d", &n);
    int temp = n;
    while(temp)
    {
        temp = temp / 10;
        digits++;
    }
    temp = n;
    int digit = 0;
    while(temp)
    {
        digit = temp % 10;
        result = result + power(digit, digits);
        temp = temp / 10;
    }

    if(result==n)
        printf("Armstrong number");
    else
        printf("Not armstrong number");
}

int main()
{
    p4();
    return 0;
}