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
int p1()
{
    int a[10]={0};
    int sum=0;
    input(a, 10);
    for(int i=0; i<=9; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}
float p2()
{
    int a[10]={0};
    int sum=0;
    float avg;
    input(a, 10);
    for(int i=0; i<=9; i++)
    {
        sum = sum + a[i];
    }
    avg=sum/10.0;
    return avg;
}
int main()
{
    printf("%f\n", p2());
    return 0;
}