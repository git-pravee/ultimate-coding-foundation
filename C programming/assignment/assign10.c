/*
1. Write a program to check whether a given number is positve, negative or zero. 
2. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lowercase), a digit or special character. 
3. Write a program which takes the length of the sides a triangle as an input. Display whether the triangle is valid or not. 
4. Write a program which takes the month number as an input and display number of days in that month.
*/
#include<stdio.h>
void p1()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n>0)
        printf("positive");
    else if(n<0)
        printf("negative");
    else
        printf("zero");
}
void p2()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch>=97 && ch<=122)
        printf("Lowercase");
    else if(ch>=65 && ch<=90)
        printf("uppercase");
    else if(ch>=48 && ch<=57)
        printf("digit");
    else
        printf("special character");
}
void p3()
{
    int a, b, c;
    printf("Enter a three side of triangle: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a+b>c && a+c>b && b+c>a)
        printf("Valid triangle");
    else
        printf("Not valid triangle");
}
void p4()
{
    int n;
    printf("Enter a month(1-12): ");
    scanf("%d", &n);
    if(n==2)
        printf("days in month 28/29");
    else if(n==4 || n==6 || n==9 || n==11)
        printf("days in month 30 days");
    else
        printf("days in month 30");
}