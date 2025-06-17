// write a program  to input a character from the user and print its ASCII code.
#include<stdio.h>
int p1()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);
    printf("ASCII code : %d",ch);
    return 0;
}

// write a program to input an ASCII code from the user and print its corresponding character.
#include<stdio.h>
int p2()
{
    int n;
    printf("Enter an ASCII code: ");
    scanf("%d",&n);
    printf("Character is %c", n);
    return 0;
}

// write a program to input three characters from the user and display characters with thier corresponding ASCII codes.
#include<stdio.h>
int p3()
{
    char a,b,c;
    printf("Enter the character: ");
    scanf("%c %c %c",&a,&b,&c);  // note the space before each %c
    
    printf("Character : %c and ASCII code : %d\n",a,a);
    printf("Character : %c and ASCII code : %d\n",b,b);
    printf("Character : %c and ASCII code : %d\n",c,c);
    return 0;
}

// write a program to print last digit of a given number.
#include<stdio.h>
int p4()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    n = n % 10;
    printf("Last digit: %d",n);
    return 0;
}

// write a program to print a given number without its last digit.
#include<stdio.h>
int p5()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    n = n / 10;
    printf("Without last digit: %d",n);
    return 0;
}