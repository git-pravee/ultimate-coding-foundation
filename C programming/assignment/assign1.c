#include<stdio.h>

// write a program to print Hello Students on the screen.
// write a program to print Hello in the first line and Students in the second line.
// write a program to print "MySirG" on the screen. (Remember to print in double qoutes.)
// write a program to print \n on the screen.
// write a program to print \r on the screen.
// write a program to print "Teacher's Day" on the screen.(Remember to print double and single qoutes)
// write a program to calculate sum of two integers. numbers are taken from user through keyboard.
// write a program to calculate square of given number. number is entered by the user.
// write a program to calculate area of rectangle. input appropriate data from the user.
// write a program to find the area of the circle. take radius of circle from user as input.

int p1()
{
    printf("Hello Students");
    return 0;
}

int p2()
{
    printf("Hello\nStudents");
    return 0;
}

int p3()
{
    printf("\"MySirG\"");
    return 0;
}

int p4()
{
    printf("\\n");
    // printf("Hello \nStudents");
    return 0;
}

int p5()
{
    printf("\\r");
    return 0;
}

int p6()
{
    printf("\"Teacher's Day\"");
    return 0;
}

int p7()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("%d + %d = %d", a,b,a+b);
    return 0;
}

int p8()
{
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    printf("%d of square is %d", a,a*a);
    return 0;
}

int p9()
{
    int a, b;
    printf("Enter length and width: ");
    scanf("%d%d",&a,&b);
    printf("length=%d and width=%d\nArea of Rectangle is %d", a,b,a*b);
    return 0;
}

int p10()
{
    int r;
    printf("Enter radius of circle: ");
    scanf("%d",&r);
    printf("Area of the circle = %.2f",3.14*r*r);
    return 0;
}

int main()
{
    p10();
    return 0;
}