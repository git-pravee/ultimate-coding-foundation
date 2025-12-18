/*
1. Write a function to swap two elements of given array with specified indices.
2. Write a function to count a total number of duplicate elements in an array.
   (Means elements that occurs 2 times in an array)
3. Write a function to print all unique elements in an array.
4. Write a function to merge two arrays of the same size sorted in descending order.
5. Write a function to count the frequency of each element of an array.
*/
#include<stdio.h>
void bubbleSort(int a[], int size)
{
    int temp;
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-i-1; j++)
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
void f1(int a[], int size, int i, int j)
{
    if(i>=size || j>=size)
        return;
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
int f2(int a[], int size)
{
    int count=0;
    bubbleSort(a, size);
    for(int i=0; i<size-1; i++)
    {
        if(a[i]==a[i+1])        
        {
            while(a[i]==a[i+1])
            {
                i++;
            }
            count++;
        }
    }
    return count;
}
void f3(int a[], int size)
{
    bubbleSort(a, size);
    for(int i=0; i<size-1; i++)
    {
        if(a[i]!=a[i+1])
            printf("%d ", a[i]);
        else
        {
            while(a[i]==a[i+1])
                i++; 
        }
    }
    if(a[size-1]!=a[size-2])
        printf("%d", a[size-1]);
}
void f4(int a[], int b[], int size)
{
    int c[size*2];
    int i=0, j=0, k=0;
    while(i<size && j<size)
    {
        if(a[i]<b[j])
            c[k++]=a[i++];
        else
            c[k++]=b[j++];
    }
    while(i<size)
        c[k++]=a[i++];
    while(j<size)
        c[k++]=b[j++];

    for(k=0; k<size*2; k++)
        printf("%d ", c[k]);
}
int f5(int a[], int size)
{
    int visited[size];
    for(int i=0; i<size; i++)
        visited[i]=0;
    for(int i=0; i<size; i++)
    {
        if(visited[i]==1)
            continue;
        int count = 1;
        for(int j = i+1; j<size; j++)
            if(a[i] == a[j])
            {
                count++;
                visited[j] = 1;
            }

        printf("%d → %d times\n", a[i], count);
    }
}
int main()
{
    int a[4]={1,2,2,1};
    int b[4]={4,5,6,7};
    f5(a, 4);
    printf("\n");
    return 0;
}