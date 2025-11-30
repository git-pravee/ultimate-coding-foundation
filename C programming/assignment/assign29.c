/*
1. Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.
2. Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.
3. Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.
4. Write a program to find the gretest number stored in an array of size 10. Take array values from the user.
5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user.
*/
#include<stdio.h>
void input(int a[], int n)
{
    printf("Enter 10 values: ");
    for(int i=0; i<=9; i++)
        scanf("%d", &a[i]);
}
void p1()
{
    int a[10]={0};
    int sum=0;
    input(a, 10);
    for(int i=0; i<=9; i++)
        sum = sum + a[i];
    printf("Sum is %d", sum);
}
void p2()
{
    int a[10]={0};
    int sum=0;
    float avg;
    input(a, 10);
    for(int i=0; i<=9; i++)
        sum = sum + a[i];
    avg=sum/10.0;
    printf("Avg is %d", avg);
}
void p3()
{
    int a[10]={0};
    input(a, 10);
    int odd=0, even=0;
    for(int i=0; i<=9; i++)
        if(a[i]%2==0)
            even=even+a[i];
        else
            odd=odd+a[i];
    printf("sum of even numbers : %d\n", even);
    printf("sum of odd numbers : %d\n", odd);
}
int p4()
{
    int a[10]={0};
    input(a, 10);
    int great=a[0];
    for(int i=1; i<=9; i++)
        if(great<a[i])
            great=a[i];
    printf("Greatest number is %d", great);
}
int p5()
{
    int a[10]={0};
    input(a, 10);
    int small=a[0];
    for(int i=1; i<=9; i++)
        if(small>a[i])
            small=a[i];
    printf("Smallest number is %d", small);
}
int main()
{
    printf("%d\n", p5());
    return 0;
}