#include<stdio.h>
#include<string.h>
// Write a function to swap values of two int variables (TSRN)
void swap(int *p, int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
}
// Write a function to search all occurrences of a given character in a given string.
// Result of search is a list of indices to be stored in the given array.
// [void search_all_occurrence(char *str, char ch, int *arr);]
void search_all_occurrence(char *str, char ch, int *arr)
{
    int i,j;
    for(i=0;j=0;str[i];i++)
    {
        if(str[i]==ch)
        {
            arr[j]=i;
            j++;
        }
    }
}
// Write a function to convert a given string into uppercase
char* uppercase(char *str)
{
    int i;
    for(i=0;str[i];i++)
        if(str[i]<='a' && str[i]<='z')
        str[i]-=32;
    return str;
}
// Write a function to convert a given string into lowercase
char* lowercase(char *str)
{
    int i;
    for(i=0;str[i];i++)
        if(str[i]<='A' && str[i]<='Z')
        str[i]+=32;
    return str;
}
// Write a function to extract a substring from a given string with specified start index (inclusive) and end index (exclusive), and store the extracted string in another char array.
// [void extract_string(char *str, int start_index, int end_index, char *result);]
void extract_string(char *str, int start_index, int end_index, char *result)
{
    int i,j;
    int l;
    l=strlen(str);
    if(start_index>==0 && start_index<end_index && start_index<l)
    {
        if(end_index>l)
            end_index=l;
        for(j=0,i=start_index;i<end_index;i++,j++)
        {
            result[j]=str[i];
        }
        result[j]='\0';
    }
    else
    result[0]='\0';
}