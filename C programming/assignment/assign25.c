#include<stdio.h>

// Write a recursive function to print first N natural numbers
void print_N(int n)
{
    if(n>0)
    {
        print_N(n-1);
        printf("%d ",n);
    }
}


// Write a recursive function to print first N natural numbers in reverse order
void print_N_reverse(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        print_N(n-1);
    }
}


// Write a recursive funtion to print first N odd natural numbers
void print_N_Odd(int n)
{
    if(n>0)
    {
        print_N_Odd(n-1);
        printf("%d ",2*n-1);
    }
}


// Write a recursive funtion to print first N odd natural numbers in reverse
void print_N_Odd_reverse(int n)
{
    if(n>0)
    {
        printf("%d ",2*n-1);
        print_N_Odd_reverse(n-1);
    }
}


// Write a recursive funtion to print first N even natural numbers
void print_N_even(int n)
{
    if(n>0)
    {
        print_N_even(n-1);
        printf("%d ",2*n);
    }
}


int main()
{
    print_N_even(5);
    return 0;
}