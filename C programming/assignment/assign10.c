// Write a program to check whetehr a given number is positive, negative and zero.
#include<stdio.h>
int p1()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n==0)
        printf("Zero");
    else if(n>0)
        printf("Positive");
    else
        printf("Negative");
    return 0;
}


// Write a program to check whether a given character is an alphabet(uppercase), an alphabet(lowercase), a digit or a special character.
#include<stdio.h>
int p2()
{
    char ch;
    printf("Enter a number: ");
    scanf("%c",&ch);
    if(ch>=48 && ch<=57)
        printf("Digit");
    else if(ch>=65 && ch<=90)
        printf("Uppercase");
    else if(ch>=97 && ch<=122)
        printf("Lowercase");
    else
        printf("Special Character");
    return 0;
}


// Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
#include<stdio.h>
int p3()
{
    int a, b, c;
    printf("Enter a side of triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b)
        printf("Valid triangle");
    else
        printf("Not valid triangle");
    return 0;
}


// Write a program which takes the month number as an input and display number of days in that month.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a month number(1-12): ");
    scanf("%d",&n);
    if(n==2)
        printf("28 and 29 days");
    else if(n==4 || n==6 || n==9 || n==11)
        printf("30 days");
    else
        printf("31 days");
    return 0;
}