/*
1. Write a program to calculate sum of first N natural numbers. 
2. Write a program to calculate sum of first N even natural numbers. 
3. Write a program to calculate sum of first N odd natural numbers. 
4. Write a program to calculate sum of squares of first N natural numbers. 
5. Write a program to caluclate sum of cubes of first N natural numbers. 
*/
#include<stdio.h>
void p1()
{
    int n, i = 1, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(i<=n)
    {
        sum = sum + i;
        i++;
    }
    printf("Sum of first %d natural numbers: %d", n, sum);
}
void p2()
{
    int n, i = 1, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(i<=n)
    {
        sum = sum + i * 2;
        i++;
    }
    printf("Sum of first %d even natural numbers: %d", n, sum);
}
void p3()
{
    int n, i = 1, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(i<=n)
    {
        sum = sum + (i * 2 - 1);
        i++;
    }
    printf("Sum of first %d odd natural numbers: %d", n, sum);
}
void p4()
{
    int n, i = 1, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(i<=n)
    {
        sum = sum + (i * i);
        i++;
    }
    printf("Sum of first %d squares natural numbers: %d", n, sum);
}
void p4()
{
    int n, i = 1, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(i<=n)
    {
        sum = sum + (i * i);
        i++;
    }
    printf("Sum of first %d cubes natural numbers: %d", n, sum);
}
