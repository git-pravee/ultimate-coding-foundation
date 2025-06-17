#include<stdio.h>
// Write a function to swap two elements of given array with specified indices
void swap_array_elements(int a[], int index1, int index2)
{
    int t;
    t=a[index1];
    a[index1]=a[index2];
    a[index2]=t;
}
// Write a function to count a total number of duplicate elements in an array. (Means elements that occurs 2 times in an array)
void sortArray(int a[], int size)
{
    int i,t,round;

    for(round=1;round<size-1;round++)
    {
        for(i=0;i<=size-round-1;i++)
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
// Write a function to print all unique elements in an array.
int count_duplicate(int a[], int size)
{
    int i,j,count=0;
    sortArray(a, size);
    for(i=0;i<size-1;)
    {
        j=i+1;
        if(a[i]==a[j])
        {
            ++count;
            do{
                j++;
                if(j>size-1)
                    break;
            }while(a[i]==a[j]);
        }
        i=j;
    }
    return count;
}
// Write a function to print all unique elements in an array.
// by sir
void print_unique(int a[], int size)
{
    int i,j,count=0;
    sortArray(a, size);
    for(i=0;i<size-1;)
    {
        printf("%d ",a[i]);
        j=i+1;
        if(a[i]==a[j])
        {
            ++count;
            do{
                j++;
                if(j>size-1)
                    break;
            }while(a[i]==a[j]);
        }
        i=j;
    }
    if(a[size-1]!=a[size-2])
        printf("%d",a[size-1]);
}
// Write a function to merge two arrays of the same size sorted in descending order.
void merge_and_sort(int a[], int b[], int size)
{
    int i,j,t;
    
    int arr[size*2];
    for(i=0;i<size;i++)
        arr[i]=a[i];
    for(j=0,i;j<size;j++,i++)
        arr[i]=b[j];
    // sort
    for(i=0;i<size*2-1;i++)
        for(j=0;j<size*2-1-i;j++)
            if(arr[j]<arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
    for(i=0;i<size*2;i++)
    {
        printf("%d ",arr[i]);
    }
}
void merge(int a[], int b[], int size, int c[])
{
    int i,j,k;
    for(i=0,j=0,k=0;i<size&&j<size;k++)
    {
        if(a[i]>b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
    }
    while(i<size)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<size)
    {
        c[k]=b[j];
        j++;
        k++;
    }

    for(i=0;i<8;i++)
        printf("%d ",c[i]);
}
// Write a function to count the frequency of each elements of an array
void print_frequency(int a[], int size)
{
    int i,j;
    sortArray(a, size);
    for(i=0;i<size-1;)
    {
        printf("%d ",a[i]);
        j=i+1;
        if(a[i]==a[j])
        {
            do{
                j++;
                if(j>size-1)
                    break;
            }while(a[i]==a[j]);
        }
        printf("- %d\n",j-i);
        i=j;
    }
    if(a[size-1]!=a[size-2])
        printf("%d - %d",a[size-1],1);

}
int main()
{
    int a[]={10, 10, 20, 30};
    // print_frequency(a,4);
    print_unique(a,4);
    return 0;
}