#include<stdio.h>

// write a program to calculate factorial of a number
void p1()
{
    int fact=1, i, n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d is : %d",n,fact);
}


// write a program to count digits in a given number
void p2()
{
    int n, count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n)
    {
        n=n/10;
        count++;
    }
    printf("Total digits are %d",count);
}


// Write a program to check whether a given number is a prime number or not
void p3()
{
    int i, n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            break;
    }
    if(i==n)
        printf("Prime number");
    else
        printf("Not a prime number");
}



// Write a program to calculate LCM of two numbers
void p4()
{
    int a, b, L;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    for(L=a>b?a:b;L<=a*b;L++)
        if(L%a==0 && L%b==0)
        {
            printf("LCM is %d",L);
            break;
        }
}



// Write a program to reverse given number
void p5()
{
    int n, r, y=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        n=n/10;
        y=y*10+r;
    }
    printf("Reverse number: %d",y);
}
int main()
{
    p5();
    return 0;
}