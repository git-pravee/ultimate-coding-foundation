/*
1. Write a program to input a character from the user and print its ASCII code.
2. Write a program to input an ASCII code from the user and print its corresponding character.
3. Write a program to input three characters from the user and display characters with their corresponding ASCII codes.
4. Write a program to print last digit of a given number.
5. Write a program to print a given number without its last digit.
*/
#include<stdio.h>
void p1()
{
    char c;
    printf("Enter character: ");
    scanf("%c", &c);
    printf("ASCII code = %d", c);
}
void p2()
{
    int c;
    printf("Enter ASCII code: ");
    scanf("%d", &c);
    printf("Character = %c", c);
}
void p3()
{
    char a, b, c;
    printf("Enter three character: ");
    scanf("%c%c%c", &a, &b, &c);
    printf("ASCII code = %d %d %d", a,b, c);
}
void p4()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Last digit = %d", n%10);
}
void p5()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Without last digit = %d", n / 10);
}
