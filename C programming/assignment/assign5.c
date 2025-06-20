/*
1. Write a program to input a three digit number and display the sum of the digits.
2. Write a program to find ASCII code of the character '+'.
3. Write a program to print size of an int, a float, a char and double type variable.
4. Write a progtam to make the last digit of a number stored in a variable as zero. (Example - if x=2345 then make it x=2340)
5. Write a program to input a number from the user asnd also input a digit. Append a digit in the number and print the resulting number. (Example - number = 234 and digit = 9 then the resulting number is 2349)
*/

#include<stdio.h>
void p1()
{
    int n, sum=0;
    printf("Enter three digit number: ");
    scanf("%d", &n);
    while(n)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    printf("Sum of digit = %d", sum);
}
void p2()
{
    printf("ASCII of '+' = %d", '+');
}
void p3()
{
    int a;
    float b;
    char c;
    double d;
    printf("Size of int = %d", sizeof(a));
    printf("Size of float = %d\n", sizeof(b));
    printf("Size of char = %d\n", sizeof(c));
    printf("Size of double = %d\n", sizeof(d));
}
void p4()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    n = n / 10 * 10;
    printf("last digit zero = %d", n);
}
void p5()
{
    int n, num;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter a append digit: ");
    scanf("%d", &num);
    n = n * 10 + num;
    printf("append value = %d", n);
}
