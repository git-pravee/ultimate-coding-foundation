/*
1. Write a program to print MySirG 5 times on the screen.
2. Write a program to print the first 10 natural numbers. 
3. Write a program to print the first 10 natural numbers in reverse order. 
4. Write a program to print the first 10 odd natural numbers. 
5. Write a program to print the first 10 odd natural numbers in reverse order. 
6. Write a program to print the first 10 even natural numbers. 
7. Write a program to print the first 10 even natural numbers in reverse order. 
8. Write a program to print squares of the first 10 natural numbers. 
9. Write a program to print cubes of the first 10 natural numbers. 
10. Write a program to print a table of 5. 
*/
#include<stdio.h>
void p1()
{
    for (int i = 1; i <= 5; i++)
        printf("MySirG\n");
}
void p2()
{
    printf("First 10 natural numbers: ");
    for (int i = 1; i <= 10; i++)
        printf("%d", i);
}
void p3()
{
    printf("First 10 natural numbers in reverse order: ");
    for (int i = 1; i <= 10; i++)
        printf("%d", 10 - i + 1);
}
void p4()
{
    printf("First 10 odd natural numbers: ");
    for (int i = 1; i <= 10; i++)
        printf("%d", 2 * i - 1);
}
void p5()
{
    printf("First 10 odd natural numbers in reverse order: ");
    for (int i = 1; i <= 10; i++)
        printf("%d ", 21 - (i * 2));
}
void p6()
{
    printf("First 10 even natural numbers: ");
    for (int i = 1; i <= 10; i++)
        printf("%d ", 2 * i);
}
void p7()
{
    printf("First 10 even natural numbers in reverse order: ");
    for (int i = 1; i <= 10; i++)
        printf("%d ", 22 - i * 2);
} 
void p8()
{
    printf("First 10 squares of natural numbers: ");
    for (int i = 1; i <= 10; i++)
        printf("%d ", i * i);
}
void p9()
{
    printf("First 10 cubes of natural numbers: ");
    for (int i = 1; i <= 10; i++)
        printf("%d ", i * i * i);
}
void p10()
{
    printf("Table of 5: ");
    for (int i = 1; i <= 10; i++)
        printf("%d ", i * 5);
}
