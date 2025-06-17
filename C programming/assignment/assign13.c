#include<stdio.h>

// Write a program to calculate sum of first N natural numbers
void p1()
{
    int i=1, n, sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("Sum of first %d natural numbers: %d",n,sum);
}

// Write a program to calculate sum of first N even natural numbers
void p2()
{
    int i=1, n, sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i*2;
        i++;
    }
    printf("Sum of first %d even natural numbers: %d",n,sum);
}

// Write a program to calculate sum of first N odd natural numbers
void p3()
{
    int i=1, n, sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+(i*2-1);
        i++;
    }
    printf("Sum of first %d Odd natural numbers: %d",n,sum);
}

// Write a program to calculate sum of squares of first N natural numbers
void p4()
{
    int i=1, n, sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i*i;
        i++;
    }
    printf("Sum ofsquares of first %d natural numbers: %d",n,sum);
}

// Write a program to calculate sum of cubes of first N natural numbers
void p5()
{
    int i=1, n, sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i*i*i;
        i++;
    }
    printf("Sum of cubes of first %d natural numbers: %d",n,sum);
}
int main()
{
    p5();
    return 0;
}