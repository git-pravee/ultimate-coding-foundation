// write a program to input a three digit number and display the sum of the digits.
#include<stdio.h>
int p1()
{
    int n, sum;
    printf("Enter three digit value: ");
    scanf("%d",&n);
    sum = n % 10;
    n = n / 10;
    sum += n % 10;
    n = n / 10;
    sum += n;
    printf("Sum = %d",sum);
    return 0;
}
// x/100+x/10%10+x%10    not using another variable


// write a program to find ASCII code of the character '+.
#include<stdio.h>
int p2()
{
    char a='+';
    printf("ASCII code of '%c' = %d",a,a);
    return 0;
}

// write a program to print size of an int, a float, a char and double type variable.
#include<stdio.h>
int p3()
{
    int a;
    float b;
    char c;
    double d;
    printf("sizeof(a) = %d\n",sizeof(a));
    printf("sizeof(b) = %d\n",sizeof(b));
    printf("sizeof(c) = %d\n",sizeof(c));
    printf("sizeof(d) = %d",sizeof(d));
    return 0;
}

// write a progtam to make the last digit of a number stored in a variable as zero. (Example - if x=2345 then make it x=2340)
#include<stdio.h>
int p4()
{
    int n;
    printf("Enter a value: ");
    scanf("%d",&n);
    n = n / 10 * 10;
    // n = n * 10;
    printf("Last digit is stored as zero: %d",n);
    return 0;
}

// write a program to input a number from the user asnd also input a digit. Append a digit in the number and print the resulting number. (Example - number = 234 and digit = 9 then the resulting number is 2349)
#include<stdio.h>
int p5()
{
    int number, n;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("Enter a digit: ");
    scanf("%d",&n);
    number = number * 10 + n;
    printf("Resulting number: %d",number);
    return 0;
}