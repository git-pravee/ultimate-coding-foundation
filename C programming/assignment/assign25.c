/*
1. Write a recursive function to print first N natural numbers
2. Write a recursive function to print first N natural numbers in reverse order
3. Write a recursive function to print first N odd natural numbers
4. Write a recursive function to print first N odd natural numbers in reverse order
*/
#include<stdio.h>

void f1(int n)
{
    if(n==1)
    {
        printf("%d ", n);
        return; 
    }
    f1(n-1);
    printf("%d ", n);
}
void f2(int n)
{
    if(n==1)
    {
        printf("%d ", n);
        return; 
    }
    printf("%d ", n);
    f2(n-1);
}
void f3(int n)
{
    if(n==1)
    {
        printf("%d ", n*2-1);
        return;
    }
    f3(n-1);
    printf("%d ", n*2-1);
}
void f4(int n)
{
    if(n==1)
    {
        printf("%d ", n*2-1);
        return;
    }
    printf("%d ", n*2-1);
    f4(n-1);
}
int main()
{
    f4(5);
    printf("\n");
    return 0;
}