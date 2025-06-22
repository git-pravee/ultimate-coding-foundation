/*
1. Write a program to check whether a given number is a three digit number or not. 
2. Write a program to print greater between two numbers. Print one number if both are the same. 
3. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots. 
4. Write a program to check whether a given year is a leap year or not. 
5. Write a program to find the gretest among three given numbers. Print number once if the greatest number appears two or three times. 
*/
#include<stdio.h>
void p1()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n<1000 && n>99)
        printf("Three digit number");
    else
        printf("Not three digit number");
}
void p2()
{
    int a, b;
    printf("Enter a number: ");
    scanf("%d%d", &a, &b);
    if(a==b)
        printf("Equal number");
    else if(a<b)
        printf("%d is greater", b);
    else
        printf("%d is greater", a);
}
void p3()
{
    int a, b, c, d;
    printf("Enter a, b, c from the equation: ");
    scanf("%d%d%d", &a, &b, &c);
    d = (b * b) - (4 * a * c);
    if(d==0)
        printf("Real and equal");
    else if(d<0)
        printf("Complex (Imaginary roots)");
    else
        printf("Real and distinct");
}
int main()
{
    p3();
    return 0;
}