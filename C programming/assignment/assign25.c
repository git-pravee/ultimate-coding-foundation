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
int main()
{
    f1(5);
    printf("\n");
    return 0;
}