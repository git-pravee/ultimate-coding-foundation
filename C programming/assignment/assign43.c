#include<stdio.h>
#include<string.h>
// Write a function to swap strings of two char arrays.
void swapString(char *a, char *b)
{
    char temp[10];
    strcpy(temp,a);
    strcpy(a,b);
    strcpy(b,temp);
}
// Write a function to sort an array of int type values. [void sort(int *ptr, int size);]
void sort(int *ptr, int size)
{
    int r,i,temp;
    for(r=0;r<size-1;r++)
    {
        for(i=0;i<size-1-r;i++)
        {
            if(*(ptr+i)>*(ptr+i+1))
            {
                temp=*(ptr+i);
                *(ptr+i)=*(ptr+i+1);
                *(ptr+i+1)=temp;
            }
        }
    }
}
// Write a function to merge two arrays in a given array. [void merge(int *arr1, int size1, int *arr2, int size2, int *arr3);]
void merge(int *arr1, int size1, int *arr2, int size2, int *arr3)
{
    int i,j,k;
    for(i=0,j=0,k=0;i<size1 && j<size2;k++)
    {
        if(arr1[i]>arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
        }
        else
        {
            arr3[k]=arr2[j];
            j++;
        }
    }
    while(i<size1)
    {
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<size2)
    {
        arr3[k]=arr2[j];
        j++;
        k++;
    }
}
// Write a function to move first values of the array to the position where all smaller values will be in the left and greater values will be in the right.
int f4(int a[], int size)
{
    int left, right, loc,temp;
    left=0;
    right=size-1;
    loc=0;
    while(left<right)
    {
        while(left<right && a[loc]<a[right])
            right--;
        if(left==right)
            break;
        temp=a[right];
        a[right]=a[loc];
        a[loc]=temp;
        loc=right;
        while(left<right && a[left]<a[loc])
            left++;
        if(left==right)
            break;
        temp=a[left];
        a[left]=a[loc];
        a[loc]=temp;
        loc=left;
    }
    return loc;
}
// There are five classes with different number of students in them. Five arrays containing marks of students of each class. Write a function to receive an address of an array of pointers to access marks of all the students. The job of function is to find the highest marks among all the classes.
int highestMarks(int **p, int no_of_classes, int num_of_students[])
{
    int max,i,j;
    max=p[0][0];
    for(i=0;i<no_of_classes;i++)
    {
        for(j=0;j<num_of_students[i];j++)
        {
            if(max<p[i][j])
            {
                max=p[i][j];
            }
        }
    }
    return max;
}
int main()
{
    int i;
    char a[]={"hell"};
    char b[]={"hii2i"};
    int arr1[5]={4,3,6,2,1};
    int arr2[7]={5,1,6,8,1,9,6};
    int arr3[20];
    merge(arr1,5,arr2,7,arr3);
    for(i=0;i<12;i++)
        printf("%d ",arr3[i]);
    // swapString(a,b);
    // printf("%s\n",a);

    return 0;
}