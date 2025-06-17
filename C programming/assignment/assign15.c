#include<stdio.h>

// Write a program to print all Prime numbers under 100
void p1()
{
    int i, n=2;
    while(n<100)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
                break;
        }
        if(i==n)
            printf("%d ",n);
        n++;
    }
}


// Write a program to print all Prine numbers between two given numbers
void p2()
{
    int i, n, a, b;
    printf("Enter lower and upper limit: ");
    scanf("%d%d",&a,&b);
    n=a+1;
    while(n<b)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
                break;
        }
        if(i==n)
            printf("%d ",n);
        n++;
    }
}



// Write a program to find next Prime number of a given number
void p3()
{
    int i, n;
    printf("Enter a number: ");
    scanf("%d",&n);
    n++;
    while(n)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
                break;
        }
        if(i==n)
        {
            printf("%d",n);
            break;
        }
        n++;
    }
}


// write a program to calculate HCF of two numbers
void p4()
{
    int n, m, H;
    printf("Enter two numbers: ");
    scanf("%d%d",&n, &m);
    H=n<m?n:m;
    while(H)
    {
        if(n%H==0 && m%H==0)
        {
            printf("HCF is %d",H);
            break;
        }
        H--;
    }
}


// Write a program to check whether two given numbers are co-prime numbers or not
void p5()
{
    int n, m, g;
    printf("Enter two numbers: ");
    scanf("%d%d",&n, &m);
    g=n<m?n:m;
    while(g)
    {
        if(n%g==0 && m%g==0)
        {
            break;
        }
        g--;
    }
    if(g==1)
        printf("Co-prime pair");
    else
        printf("Not co-prime pair");
}




int main()
{
    p4();
    return 0;
}