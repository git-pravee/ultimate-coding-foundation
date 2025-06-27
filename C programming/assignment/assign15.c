/*
1. Write a program to all prime numbers under 100.
2. Write a program to print all prime numbers between two given numbers.
3. Write a program to find next prime number of given number.
4. Write a program to calculate HCF of two numbers.
5. Write a program to check whether two given numbers are co-prime numbers or not.
*/
#include <stdio.h>
int prime(int n)
{
    if (n == 1)
        return 0;
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
            return 0;
        i++;
    }
    return 1;
}
void p1()
{
    printf("All prime numbers under 100: ");
    for (int i = 1; i <= 100; i++)
        if (prime(i))
            printf("%d ", i);
}
void p2()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("All prime numbers between %d and %d: ", a, b);
    for (int i = a; i <= b; i++)
        if (prime(i))
            printf("%d ", i);
}
void p3()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n)
    {
        if (prime(n))
        {
            printf("next prime number is %d", n);
            break;
        }
        n++;
    }
}
void p4()
{
    int a, b, h;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    h = a < b ? a : b;
    while (h)
    {
        if (a % h == 0 && b % h == 0)
        {
            printf("(%d, %d) of hcf is %d", a, b, h);
            break;
        }
        h--;
    }
}
// Brute Force
void p5_a()
{
    int a, b, h;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    h = a < b ? a : b;
    while (h)
    {
        if (a % h == 0 && b % h == 0)
            break;
        h--;
    }
    if (h == 1)
        printf("Co-prime number");
    else
        printf("not co-prime number");
}
// Euclidean Algorithm
void p5_b()
{
    int a, b, h;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    if (a == 1)
        printf("Co-prime number");
    else
        printf("not co-prime number");
}
