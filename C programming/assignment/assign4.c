/*
1. Write a program to calculate size of a character contant.
2. Write a program to calculate size of a real constant.
3. Write a program with one char type variable. Assign 'A' in the variable. Now change the value of variable from 'A' to 'B' using increment opearator.
4. Write a program to swap values of two int variables.
5. Write a program to swap values of two int variables without using a third variable.
6. Write a program to swap values of two int variables without using third variable and without +, - operators.
7. Write a program to swap values of two int variables without using third variable and arithmetic operators.
8. Write a program to swap values of two int variables in single line arithmetic expression.
*/

#include<stdio.h>
void p1()
{
    printf("Size of Character constant = %d", sizeof('A'));
}
void p2()
{
    printf("Size of integer constant = %d", sizeof(4.8));
}
void p3()
{
    char c = 'A';
    printf("before %c", c);
    c++;
    printf("after %c", c);
}
void p4()
{
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("A = %d\nB = %d", a, b);
    c = a;
    a = b;
    b = c;
    printf("\nAfter Swapping...");
    printf("A = %d\nB = %d", a, b);
}
void p5()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("A = %d\nB = %d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter Swapping...");
    printf("A = %d\nB = %d", a, b);
}
void p6()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("A = %d\nB = %d", a, b);
    a = a * b;
    b = a / b;
    a = a / b;
    printf("\nAfter Swapping...");
    printf("A = %d\nB = %d", a, b);
}
void p7()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("A = %d\nB = %d", a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("\nAfter Swapping...");
    printf("A = %d\nB = %d", a, b);
}
void p8()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("A = %d\nB = %d", a, b);
    a = a + b - (b = a);
    printf("\nAfter Swapping...");
    printf("A = %d\nB = %d", a, b);
}