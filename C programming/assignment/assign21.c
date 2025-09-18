/*
1. Write a function to calculate the area of a circle. (TSRS)
2. Write a function to calculate simple interest. (TSRS)
3. Write a function to check whether a given number  is even or odd. 
   Return 1 if the number is even, otherwise return 0. (TSRS)
4. Write a function to print first N natural numbers (TSRN)
5. Write a function to print first N odd natural numbers. (TSRN)
*/
#include<stdio.h>
float f1(int r)
{
    return 3.14*r*r;
}
float f2(int p, float r, int t)
{
    return (p*r*t)/100;
}
int f3(int n)
{
    if(n%2)
        return 0;
    else 
        return 1;
}
void f4(int n)
{
    for(int i=1; i<=n; i++)
        printf("%d ", i);
}
void f5(int n)
{
    for(int i=1; i<=n; i++)
        printf("%d ", i*2-1);
}
