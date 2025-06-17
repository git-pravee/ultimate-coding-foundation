// write a program to check whether a given number is a three digit number or not.
#include<stdio.h>
int p1()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n>99&&n<1000)
        printf("Three digit number");
    else
        printf("Not a three digit number");
    return 0;
}


// write a program to print greater between two numberes. Print one number if both at the same.
#include<stdio.h>
int p2()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    if(a==b)
        printf("Both the same number");
    else if(a>b)
        printf("Greater number: %d",a);
    else
        printf("Greater number: %d",b);
    return 0;
}


// write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots.
#include<stdio.h>
int p3()
{
    int a,b,c,D;
    printf("Enter the values of a, b, c quadratic equation: ");
    scanf("%d%d%d",&a,&b,&c);
    D = (b*b)-(4*a*c);
    printf("D=%d\n",D);
    if(D==0)
        printf("Real & Equal");
    else if(D>0)
        printf("Real & Distinct");
    else
        printf("Imaginary");
    return 0;
}


// write a program to check whether a given year is a leap year or not.
#include<stdio.h>
int p4()
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    if(year%100)
    {
        if(year%4)
            printf("Not a leap year");
        else
            printf("Leap year");
    }
    else
    {
        if(year%400)
            printf("Not a leap year");
        else
            printf("Leap year");
    }
    return 0;
}


// write a program to find the greatest among three given numbers. print number once if the greatest number appears two or three times.
#include<stdio.h>
int p5()
{
    int a, b, c;
    printf("Enter a three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("Greater Number: ");
    if(a>b && a>c)
        printf("%d",a);
    else if(b>c)
        printf("%d",b);
    else
        printf("%d",c);
    return 0;
}