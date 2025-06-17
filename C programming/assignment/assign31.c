#include<stdio.h>

void input(int b[], int n)
{
    int i;
    printf("Enter values: ");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
}


// Write a function to find the greatest number from the given array of any size. (TSRS)
int findMax(int a[], int size)
{
    int i,max;

    max=a[0];
    for(i=0;i<size;i++)
        if(max<a[i])
            max=a[i];
    
    return max;
}

// Write a function to find the smallest number from the given array of any size. (TSRS)
int findMin(int a[], int size)
{
    int i,min;

    min=a[0];
    for(i=0;i<size;i++)
        if(min>a[i])
            min=a[i];
    
    return min;
}

// Write a function to sort an array of any size. (TSRN)
void sortArray(int a[], int size)
{
    int i,t,round;

    for(round=0;round<size-1;round++)
    {
        for(i=0;i<=size-1-round;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
}


// Write a funtion to rotate an array by n position in d direction. The d is an indicative value for left or right. 
// (for example, if array of size 5 is [32,29,40,12,70]; n is 2 and d is left, then the resulting array after left rotation 2 times is [40,12,70,32,29])
void rotate(int a[], int size, int n, int d)
{
    int i,t;
    if(d==1)
    {
        while(n)
        {
            t=a[size-1];
            for(i=size-2;i>=0;i--)
                a[i+1]=a[i];
            a[0]=t;
            n--;
        }
    }
    else if(d==-1)
    {
        while(n)
        {
            t=a[0];
            for(i=1;i<=size-1;i++)
                a[i-1]=a[i];
            a[size-1]=t;
            n--;
        }
    }
}


// Write a function to find the first occurence of adjacent duplicate value in the array. Function has to return the value of the element.
int adjacent(int a[], int size)
{
    int i;
    for(i=0;i<=size-2;i++)
        if(a[i]==a[i+1])
            return a[i];
    return -1; // Return -1 if no duplicates are found
}
int main()
{

    int i;
    int b[5]={24,54,14,21,50};
    i=adjacent(b,5);
    printf("%d",i);

    return 0;
}