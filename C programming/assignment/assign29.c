#include<stdio.h>

void input(int b[], int n)
{
    int i;
    printf("Enter values: ");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]); 
}
// Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.
void sumArray()
{
    int i,s=0,a[10];

    input(a,10);

    for(i=0;i<10;i++)
        s=s+a[i];

    printf("%d",s);
}

// Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.
void avgArray()
{
    int i,s=0,a[10];

    input(a,10);

    for(i=0;i<10;i++)
        s=s+a[i];

    printf("%f",s/10.0);
}


// Write a program to calculate the sum of all even numbers and sum of all odd numbersf, which are stored in an array of size 10. Take array values from the user.
void sumEvenOddArray()
{
    int i,a[10],se=0,so=0;

    input(a,10);

    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
            se=se+a[i];
        else
            so=so+a[i];
    }

    printf("sum of even = %d\n",se);
    printf("sum of odd = %d",so);
}


// Write a program to find the gretest number stored in an array of size 10. Take array values from the user.
void greaterNArray()
{
    int i,a[10],t;

    input(a,10);

    for(i=0;i<10;i++)
    {
        if(a[i]>a[i+1])
        {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
    }
    printf("%d\n",a[9]);
}


// Write a program to find the smallest number stored in an array of size 10. Take array values from the user.
void smallerNArray()
{
    int i,a[10],t,j;

    input(a,10);

    for(i=0;i<10;i++)
    {
        if(a[i]<a[i+1])
        {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
    // printf("%d ",a[i]);
    }
    printf("\n%d",a[9]);
}

int main()
{
    // int n[10]={2,4,2,2,2,3,2,1,2,2};
    sumArray();
    return 0;
}