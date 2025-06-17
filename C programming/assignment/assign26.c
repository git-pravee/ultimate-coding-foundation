#include<stdio.h>

// Write a recursive funtion to print first N even natural numbers in reverse order
void print_N_even_reverse(int n)
{
    if(n>0)
    {
        printf("%d ",n*2);
        print_N_even_reverse(n-1);
    }
}


// Write a recursive funtion to print squares of first N natural numbers
void print_N_square(int n)
{
    if(n>0)
    {
        print_N_square(n-1);
        printf("%d ",n*n);
    }
}


// Write a recursive funtion to print binary of a given decimal number
void print_binary(int n)
{
    if(n>0)
    {
        print_binary(n/2);
        if(n%2==0)
            printf("0");
        else
            printf("1");
    }
}


// Write a recursive funtion to print octal of given decimal number
void print_octal(int n)
{
    if(n>0)
    {
        print_octal(n/8);
        if(n<8)
            printf("%d",n);
        else
            printf("%d",n%8);
    }
}


// Write a recursive funtion to print reverse of a given number
void print_reverse(int n)
{
    if(n>0)
    {
        printf("%d",n%10);
        if(n>0)
            print_reverse(n/10);
    }
}


int main()
{
    print_reverse(32451);
    return 0;
}