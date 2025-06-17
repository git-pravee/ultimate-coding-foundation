#include<stdio.h>

// Write a function to calculate the area of a circle.(TSRS)
float area(int r)
{
    return 3.14*r*r;
}


// write a function to calculate simple interest. (TSRS)
float simple_interest(int p, int r, int t)
{
    return p*r*t/100;
}


// write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRs)
int is_even(int n)
{
        return n%2==0;
}


// Write a function to print first N natural numbers (TSRN)
void printN(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%d ",i);
}


// write a function to print first N odd natural numbers. (TSRN)
void printNOdd(int n)
{
    int i,j=1;
    for(i=1;i<=n;i++)
        printf("%d ",i*2-1);
}
int main()
{
    // p1
    // printf("Area of Circle is %f",p1(5));

    // p2
    // printf("simple interest %d",p2(500,2,2));

    // p3
    // int n;
    // printf("Enter a number: ");
    // scanf("%d",&n);
    // printf("%d",p3(n));

    // p4
    // p4(10);

    // p5
    p5(10);
    return 0;
}