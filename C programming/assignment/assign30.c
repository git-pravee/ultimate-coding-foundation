#include<stdio.h>

void input(int b[], int n)
{
    int i;
    printf("Enter values: ");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
}


// Write a program to sort elements of an array of size 10. Take array values from the user.
void sortArray()
{
    int i,a[10],t,round,n=sizeof(a)/sizeof(a[0]);

    input(a,10);

    for(round=0;round<n-1;round++)
    {
        for(i=0;i<n-1-round;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
            // printf("%d ",a[i]);
        }
        // printf("\n");
    }

    for(i=0;i<10;i++)
        printf("%d ",a[i]);
}


// Write a program to find second largest in an array. Take array values from the user.
void secondLargest(int num)
{
    int i,a[num],t,round,n=num;

    input(a,n);

    for(round=0;round<n-1;round++)
    {
        for(i=0;i<n-1-round;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
            // printf("%d ",a[i]);
        }
        // printf("\n");
    }
    
    printf("%d ",a[n-2]);
}


// Write a program to find second smallest in an array. Take array values from the user.
void secondSmallest(int num)
{
    int i,a[num],t,round,n=num;

    input(a,n);

    for(round=0;round<n-1;round++)
    {
        for(i=0;i<n-1-round;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
            // printf("%d ",a[i]);
        }
        // printf("\n");
    }
    
    printf("%d ",a[1]);
}

// Write a program to sort an array of 10 elements in desending order.
void sortArrayDecending()
{
    int i,a[10],t,round,n=10;

    input(a,n);

    for(round=0;round<n-1;round++)
    {
        for(i=0;i<n-1-round;i++)
        {
            if(a[i]<a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
            // printf("%d ",a[i]);
        }
        // printf("\n");
    }
    
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}


// Write a program in C to copy the elements of one array into another array. Take array values from the user.
void copyArray(int num)
{
    int i,a[num],t,round,n=num,b[num];

    input(a,n);

    for(i=0;i<n;i++)
    {
        b[i]=a[i];
        printf("%d ",b[i]);
    }
}


int main()
{
    copyArray(5);
    return 0;
}