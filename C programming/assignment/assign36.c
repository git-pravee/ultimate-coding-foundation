#include<stdio.h>
#include<string.h>

// Write a function to calculate length of the string
int stringLength(char str[])
{
    int i;
    for(i=0;str[i];i++);
    return i;
}

// Write a function to reverse a string.
char* reverseString(char str[])
{
    int i, l;
    char ch;
    l=stringLength(str);
    for(i=0;i<l/2;i++)
    {
        ch=str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=ch;
    }
    
    return str;
}

// Write a funtion to compare two strings.
int compareString(char s1[], char s2[])
{
    int i;
    if(strlen(s1)!=strlen(s2))
        return 0;

    for(i=0;s1[i];i++)
        if(s1[i]!=s2[i])
            return 0;
    
    return 1;
}

// Write a function to transform string into uppercase.
char* uppercaseString(char str[])
{
    int i;
    for(i=0;str[i];i++)
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;

    return str;
}

// Write a function to transform string into lowercase.
char* lowercaseString(char str[])
{
    int i;
    for(i=0;str[i];i++)
        if(str[i]>='A' && str[i]<='Z')
            str[i]+=32;

    return str;
}
int main()
{
    int x;
    char str[]="praveen";
    char str2[]="PRAVEEN";
    // x=compareString(str2,str);
    lowercaseString(str2);
    printf("%s",str2);
    // printf("%d ",stringLength(str));
    return 0;
}