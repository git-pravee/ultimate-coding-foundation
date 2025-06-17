
// write a program to check whether a given number is positive on non positive
#include<stdio.h>
int p1()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n>0)
        printf("Positive");
    else
        printf("Non Positive");
    return 0;
}


// write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
int p2()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%5)
        printf("Not Divisible by 5");
    else
        printf("Divisible by 5");
    return 0;
}


// write a program to check whether a given number is an even number or odd number.
#include<stdio.h>
int p3()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%2)
        printf("Odd");
    else
        printf("Even");
    return 0;
}


// write a program to check whether a given number is an even number or an odd number without using % operator.
#include<stdio.h>
int p4()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n/2*2 == n)
        printf("Even");
    else
        printf("Odd");
    return 0;
}


// write a program to check whether the given number is even or odd using a bitwise operator.
#include<stdio.h>
int p5()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n&1)
        printf("Odd");
    else
        printf("Even");
    return 0;
}