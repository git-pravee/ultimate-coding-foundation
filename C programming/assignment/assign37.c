#include<stdio.h>

// Write a function to count vowels in a given string.
int vowelCount(char str[])
{
    int i, j, count=0;
    char v[]="aeiouAEIOU";

    for(i=0;str[i];i++)
        for(j=0;v[j];j++)
            if(str[i]==v[j])
            {
                count++;
                break;
            }

    return count;
}


// Write a function to find a character in a given string. Return index of first occurance of given character. Return -1 if character not found.
int indexOf(char str[], char ch)
{
    int i;
    for(i=0;str[i];i++)
        if(ch==str[i])
            return i;
    return -1;
}

// Write a function to find character in a given string between specified indices (start index (inclusive) and end index e(exclusive))
int indexOfSpecified(char str[], char ch, int startIndex, int endIndex)
{
    int i;
    for(i=startIndex;str[i] && i<endIndex;i++)
        if(ch==str[i])
            return i;
    return -1;
}

// Write a function to swap two characters of a given string with specified indices.
char* swapChars(char str[], int i, int j)
{
    char ch;
    if(i<strlen(str) && j<strlen(str))
    {
        ch=str[i];
        str[i]=str[j];
        str[j]=ch;
    }

    return str;
}


// Write a funtion to check whether a given string is an alphanumric string or not. (Alphanumric string must contain at least one alphabet and one digit)
int alphanumericString(char str[])
{
    int i, alpha=0, digit=0;
    for(i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            alpha=1;
        else if(str[i]>='a' && str[i]<='z')
            alpha=1;
        else if(str[i]>='0' && str[i]<='9')
            digit=1;
    }
    if(alpha&&digit)
        return 1;

    return 0;
}
int main()
{
    char str1[]="A1";
    char ch='v';
    alphanumericString(str1);
    // printf("%d",vowelCount(str1));
    return 0;
}