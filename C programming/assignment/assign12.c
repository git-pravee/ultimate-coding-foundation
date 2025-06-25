/*
1. Write a program to print MySirG N times on the screen.
2. Write a program to print the first N natural numbers.
3. Write a program to print the first N natural numbers in reverse order.
4. Write a program to print the first N odd natural numbers.
5. Write a program to print the first N odd natural numbers in reverse order.
6. Write a program to print the first N even natural numbers.
7. Write a program to print the first N even natural numbers in reverse order.
8. Write a program to print squares of the first N natural numbers.
9. Write a program to print cubes of the first N natural numbers.
10. Write a program to print a table of N.
*/
#include <stdio.h>
void p1()
{
    int n;
    printf("Enter a number for print n times: ");
    scanf("%d", &n);
    while (n)
    {
        printf("MySirG ");
        n--;
    }
}
void p2()
{
    int n, i = 1;
    printf("Enter a number for print n times: ");
    scanf("%d", &n);
    printf("First %d natural numbers: ", n);
    while (i <= n)
    {
        printf("%d ", i);
        i++;
    }
}
void p3()
{
    int n, i = 1;
    printf("Enter a number for print n times: ");
    scanf("%d", &n);
    printf("First %d natural numbers in reverse order: ", n);
    while (i <= n)
    {
        printf("%d ", n - i + 1);
        i++;
    }
}
void p4()
{
    int n, i = 1;
    printf("Enter a number for print n times: ");
    scanf("%d", &n);
    printf("First %d odd natural numbers: ", n);
    while (i <= n)
    {
        printf("%d ", 2 * i - 1);
        i++;
    }
}
void p5()
{
    int n, i = 1;
    printf("Enter a number for print n times: ");
    scanf("%d", &n);
    printf("First %d odd natural numbers in reverse order: ", n);
    while (i <= n)
    {
        printf("%d ", n * 2 - i * 2 + 1);
        i++;
    }
}
void p6()
{
    int n, i = 1;
    printf("Enter a number for print n times: ");
    scanf("%d", &n);
    printf("First %d even natural numbers: ", n);
    while (i <= n)
    {
        printf("%d ", i * 2);
        i++;
    }
}
void p7()
{
    int n, i = 1;
    printf("Enter a number for print n times: ");
    scanf("%d", &n);
    printf("First %d even natural numbers in reverse order: ", n);
    while (i <= n)
    {
        printf("%d ", n * 2 - i * 2 + 2);
        i++;
    }
}
void p8()
{
    int n, i = 1;
    printf("Enter a number for print n times: ");
    scanf("%d", &n);
    printf("First %d squares of natural numbers: ", n);
    while (i <= n)
    {
        printf("%d ", i * i);
        i++;
    }
}
void p9()
{
    int n, i = 1;
    printf("Enter a number for print n times: ");
    scanf("%d", &n);
    printf("First %d cubes of natural numbers: ", n);
    while (i <= n)
    {
        printf("%d ", i * i * i);
        i++;
    }
}
void p10()
{
    int n, i = 1;
    printf("Enter a number for print n times: ");
    scanf("%d", &n);
    printf("Table of %d: ", n);
    while (i <= 10)
    {
        printf("%d ", i * n);
        i++;
    }
}
