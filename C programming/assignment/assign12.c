// write a program to print MySirG N times on the screen
#include<stdio.h>
int p1()
{
    int i = 1,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("MySirG\n");
        i++;
    }
    return 0;
}



// write a program to print the first N natural numbers
#include<stdio.h>
int p2()
{
    int i = 1,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i);
        i++;
    }
    return 0;
}


// write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int p3()
{
    int i = 1,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",n+1-i);
        i++;
    }
    return 0;
}


// write a program to print the first N odd natural numbers
#include<stdio.h>
int p4()
{
    int i = 1,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",2*i-1);
        i++;
    }
    return 0;
}



// write a program to print the first N odd natural numbers in reverse number
#include<stdio.h>
int p5()
{
    int i = 1,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",n*2+1-2*i);
        i++;
    }
    return 0;
}



// write a program to print the first N even natural numbers
#include<stdio.h>
int p6()
{
    int i = 1,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i*2);
        i++;
    }
    return 0;
}



// write a program to print the first N even natural numbers in reverse number
#include<stdio.h>
int p7()
{
    int i = 1,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",n*2+2-2*i);
        i++;
    }
    return 0;
}


// write a program to print squares of the first N natural numbers
#include<stdio.h>
int p8()
{
    int i = 1,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i*i);
        i++;
    }
}



// write a program to print cubes of the first N natural numbers
#include<stdio.h>
int p9()
{
    int i = 1,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i*i*i);
        i++;
    }
}



// write a program to print a table of N
#include<stdio.h>
int p10()
{
    int i = 1,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%d X %d = %d\n",n,i,i*n);
        i++;
    }
}