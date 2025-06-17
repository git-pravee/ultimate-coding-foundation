#include<stdio.h>

// Write a program to find the Nth term of the fibonacci series.
void p1()
{
    int n, a=-1, b=1, c;
    printf("Which terms to print: ");
    scanf("%d",&n);
    while(n)
    {
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    printf("%d ",c);
}


// Write a program to print first N terms of Fibonacci series
void p2()
{
    int n, a=-1, b=1, c;
    printf("How many terms to print: ");
    scanf("%d",&n);
    while(n)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        n--;
    }
}

// Write a program to check whether a given number is there in the Fibonacci series or not
void p3()
{
    int n, a=-1, b=1, c;
    printf("Enter a number: ");
    scanf("%d",&n);
    while((a+b)<n)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(c==n)
        printf("%d is in Fibonacci series",n);
    else
        printf("Not in the Fibonacci series");
}


// Write a program to check whether a given number is an Armstrong number or not
void p4()
{
    int x, digits=0, y, r, p, i, s=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    y=x;
    while(y)
    {
        y/=10;
        digits++;
    }
    y=x;
    while(y)
    {
        r=y%10;
        y/=10;
        // calculate r power digits
        for(i=1,p=1;i<=digits;i++)
            p=p*r;
        s=s+p;
    }
    if(s==x)
        printf("Armstrong number");
    else
        printf("Not a Armstrong number");
}


// Write a program to print all Armstrong numbers under 1000
void p5()
{
    int x, digits, y, r, p, i, s;
    for(x=1;x<=1000;x++)
    {
        y=x;
        digits=0;
        while(y)
        {
            y/=10;
            digits++;
        }
        y=x;
        s=0;
        while(y)
        {
            r=y%10;
            y/=10;
            // calculate r power digits
            for(i=1,p=1;i<=digits;i++)
                p=p*r;
            s=s+p;
        }
        if(s==x)
            printf("%d ",x);
    }
}

int main()
{
    p5();
    return 0;
}