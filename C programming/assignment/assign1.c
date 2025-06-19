/*
1. Write a program to print Hello Students on the screen.
2. Write a program to print Hello in the first line and Students in the second line.
3. Write a program to print "MySirG" on the screen. (Remember to print in double quotes)
4. Write a program to print \n on the screen.
5. Write a program to print \r on the screen.
6. Write a program to print "Teacher's Day" on the screen. (Remember to print double and single quotes)
7. Write a program to calculate sum of two integers. Numbers are taken from user through keyboard.
8. Write a program to calculate square of a given number. Number is entered by the user.
9. Write a program to calculate area of rectangle. Input appropriate data from the user.
10. Write a program to find area of the circle. Take radius of circle from user as input.
*/

#include<stdio.h>
void p1()
{
    printf("Hello Students");
}
void p2()
{
    printf("Hello \nStudents");
}
void p3()
{
    printf("\"MySirG\"");
}
void p4()
{
    printf("\n");
}
void p5()
{
    printf("\r");
}
void p6()
{
    printf("\"Teacher's Day\"");
}
void p7()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("Sum = %d", a + b);
}
void p8()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Square of %d = %d", a, a * a);
}
void p9()
{
    int length, breadth;
    printf("Enter length and breadth: ");
    scanf("%d%d", &length, &breadth);
    printf("Area of Rectangle = %d", length * breadth);
}
void p10()
{
    int r;
    printf("Enter a radius: ");
    scanf("%d", &r);
    printf("Area of circle = %f", 3.14 * r);
}