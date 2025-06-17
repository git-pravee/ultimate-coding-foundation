// write a program to calculate size of character constant.
#include<stdio.h>
int p1()
{
    printf("Size of character constant: %d",sizeof('a'));
    return 0;
}

// write a program to calculate size of real constant.
#include<stdio.h>
int p2()
{
    printf("Size of Real constant: %d",sizeof(7.2));
    return 0;
}

// write a program with one char type variable. assign 'A' in the variable. Now change the value of variable from 'A' to 'B' using increment operator.
#include<stdio.h>
int p3()
{
    char c='A';
    c++;    // c = c + 1;
    printf("change A to B: %c",c);
    return 0;
}

// write a program to swap values of two int variables.
#include<stdio.h>
int p4()
{
    int a, b, c;
    printf("Enter two values: ");
    scanf("%d%d",&a,&b);
    printf("A = %d, B = %d\n",a,b);
    c = a;
    a = b;
    b = c;
    printf("Swap values A = %d, B = %d",a,b);
    return 0;
}

// write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int p5()
{
    int a, b;
    printf("Enter two values: ");
    scanf("%d%d",&a,&b);
    printf("A = %d, B = %d\n",a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Swap values A = %d, B = %d",a,b);
    return 0;
}

// write a program to swap values of two int variables without using third variable and without +, - operators.
#include<stdio.h>
int p6()
{
    int a, b;
    printf("Enter two values: ");
    scanf("%d%d",&a,&b);
    printf("A = %d, B = %d\n",a,b);
    a = a * b;
    b = a / b;
    a = a / b;
    printf("Swap values A = %d, B = %d",a,b);
    return 0;
}

// write a program to swap values of two int variables without using third variable and arithmetic operators.
#include<stdio.h>
int p7()
{
    int a, b;
    printf("Enter two values: ");
    scanf("%d%d",&a,&b);
    printf("A = %d, B = %d\n",a,b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("Swap values A = %d, B = %d",a,b);
    return 0;
}

// write a program to swap values of two int variables in single line arithmetic expression.
#include<stdio.h>
int p8()
{
    int a, b;
    printf("Enter two values: ");
    scanf("%d%d",&a,&b);
    printf("A = %d, B = %d\n",a,b);
    a = a + b - (b = a);
    printf("Swap values A = %d, B = %d",a,b);
    return 0;
}
// implementation depedent
