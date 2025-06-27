/*
1. Write a program to calculate factorial of number.
2. Write a program to count digits in a given number.
3. Write a program to check whether a given number is a Prime numbers or not.
4. Write a program to calculate LCM of two numbers.
5. Write a program to reverse a given number.
*/
#include <stdio.h>
void p1()
{
    int n, i = 1, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= n)
    {
        fact = fact * i;
        i++;
    }
    printf("%d of factorial : %d", n, fact);
}
void p2()
{
    int n, digit = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n)
    {
        n = n / 10;
        digit++;
    }
    printf("digits in number : %d", digit);
}
void p3()
{
    int n, i = 2, k = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i < n)
    {
        if (n % i == 0)
        {
            k = 1;
            break;
        }
        i++;
    }
    if (k)
        printf("Not prime number");
    else
        printf("Prime number");
}
void p4()
{
    int a, b, l;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    l = a < b ? b : a;
    while (l <= a * b)
    {
        if (l % a == 0 && l % b == 0)
        {
            printf("lcm of %d and %d is %d", a, b, l);
            break;
        }
        l++;
    }
}
void p5()
{
    int n, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n)
    {
        reverse = reverse * 10 + n % 10;
        n = n / 10;
    }
    printf("reverse number : %d", reverse);
}
