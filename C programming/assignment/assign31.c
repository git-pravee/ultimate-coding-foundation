/*
1. Write a function to find the greatest number from the given array of any size. (TSRS)
2. Write a function to find the smallest number from the given array of any size. (TSRS)
3. Write a function to sort an array of any size. (TSRN)
4. Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right. 
   (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29])
5. Write a function to find the first occurrence of adjacent duplicate values in the array. 
   Function has to return the value of the element.
*/
#include<stdio.h>
void bubbleSort(int a[], int n)
{
    int temp=0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int f1(int a[], int n)
{
    bubbleSort(a, n);
    return a[n-1];
}
int f2(int a[], int n)
{
    bubbleSort(a, n);
    return a[0];
}
void f3(int a[], int n)
{
    bubbleSort(a, n);
    printf("Sorted array: ");
    for(int i=0; i<n; i++)
        printf("%d ", a[i]);
}
void f4(int a[], int size, int pos, int dir)
{
    int temp, i;
    pos = pos % size;  //extra optimization
    if(dir==1)  //right
    {
        while(pos!=0)
        {
            for(i=0; i<size-1; i++)
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
            pos--;
        }
    }
    if(dir==0)  //left
    {
        while(pos!=0)
        {
            for(i=size-1; i>0; i--)
            {
                temp=a[i];
                a[i]=a[i-1];
                a[i-1]=temp;
            }
            pos--;
        }
    }
    for(i=0; i<size; i++)
        printf("%d ", a[i]);
}
int f5(int a[], int size)
{
    for(int i=0; i<size-1; i++)
    {
        if(a[i]==a[i+1])
            return a[i];
    }
    return -1;
}
int main()
{
    int a[5]={32, 29, 40, 12, 12};
    printf("%d", f5(a, 5));
    printf("\n");
    return 0;
}