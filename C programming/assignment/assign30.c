/*
1. Write a program to sort elements of an array of size 10. Take array values from the user.
2. Write a program to find second largest in an array. Take array values from the user.
3. Write a program to find the second smallest number in an array. Take array values from the user.
4. Write a program to sort an array of 10 elements in descending order.
5. Write a program in C to copy the elements of one array into another array. Take array values from the user.
*/
#include<stdio.h>
void input(int a[], int n)
{
    printf("Enter %d values: ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
}
void bubbleSort(int a[])
{
    int temp=0;
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9-i; j++)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }
}
void reverseBubbleSort(int a[])
{
    int temp=0;
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9-i; j++)
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }
}
void p1()
{
    int a[10]={0};
    input(a, 10);
    bubbleSort(a);
    printf("sorted array: ");
    for(int i=0; i<=9; i++)
        printf("%d ", a[i]);
}
void p2()
{
    int a[10]={0};
    input(a, 10);
    bubbleSort(a);
    printf("second largest number: %d\n", a[8]);
}
void p3()
{
    int a[10]={0};
    input(a, 10);
    bubbleSort(a);
    printf("second smallest number: %d\n", a[1]);
}
void p4()
{
    int a[10]={0};
    input(a, 10);
    reverseBubbleSort(a);
    printf("sorted array: ");
    for(int i=0; i<=9; i++)
        printf("%d ", a[i]);
}
void p5(int n)
{
    int a[n], b[n];
    input(a, n);
    for(int i=0; i<n; i++)
        b[i]=a[i];
    printf("copying array from a to b: ");
    for(int i=0; i<n; i++)
        printf("%d ", b[i]);
}
int main()
{
    p5(5);
    printf("\n");
    return 0;
}