/*
1. Write a program to check whether a given number is positive or non positive. 
2. Write a program to check whether a given number is divisible by 5 or not. 
3. Write a program to check whether a given number is an even number or an odd number. 
4. Write a program to check whether a given number is an even number or an odd number without using % operator. 
5. Write a program to check whether the given number is even or odd using a bitwise operator.
*/

#include<stdio.h>
void p1()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n>0)
        printf("Positive number");
    else
        printf("Non positive number");
}
void p2()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n%5)
        printf("Not divisible by 5");
    else
        printf("Divisible by 5");
}
void p3()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n%2)
        printf("Odd number");
    else
        printf("Even number");
}
void p4()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n/2*2 == n)
        printf("Even number");
    else
        printf("Odd number");
}
void p5()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n&1)
        printf("Odd number");
    else
        printf("Even number");
}
