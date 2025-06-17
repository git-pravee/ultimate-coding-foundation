#include<stdio.h>
#include<string.h>

// Write a function to check whether a given string is palindrome or not.
int palindromeString(char str[])
{
    int i, length;
    length=strlen(str);
    for(i=0;i<=length/2;i++)
        if(str[i]!=str[length-i-1])
            return 0;
    return 1;
}

// Write a function to trim string (removing leading spaces from both ends).
char* trimString(char str[])
{
    int i=0,j,k,count=0;
    for(k=strlen(str)-1;str[k]==' ';k--)
        count++;
    k=strlen(str);
    while(str[i]==' ' && str[i]!=0)
        i++;
    for(j=0;str[j+i];j++)
        str[j]=str[i+j];
    str[k-count-i]='\0';
    return str;
}

// Write a function to count words in a given string
int countWordString(char str[])
{
    int i, count=0;
    for(i=0;str[i];i++)
    {
        if(str[i]!=' ')
        {
            // count++;
            // while(str[i] && str[i]
            // !=' ')
            //     i++;
            if(str[i]==str[i+1])
                continue;
            else 
                count++;
        }
    }

    return count;
}

// Write a function to reverse a string word wise. (For example if the given string is "Mysirg Education Services" then the resulting string should be "Services Education Mysirg")
char* reverse(char str[])
{
    int i,j,word_count,k;
    word_count=countWordString(str);
    char s[word_count][50];
    for(i=0,j=0,k=0;str[i];i++,k++)
    {
        if(str[i]!=' ')
            s[j][k]=str[i];
        else
        {
            s[j][k]='\0';
            j++;
            k=-1;
        }
    }
    str[0]='\0';
    for(j=word_count-1;j>=0;j--)
    {
        if(str[0]!='\0')
            strcat(str," ");
        strcat(str,s[j]);
    }
    str[strlen(str)]='\0';
    return str;
}

// Write a function to do case insensitive comparison of two strings.
int insensitiveString(char str1[], char str2[])
{
    int i;
    if(strlen(str1)!=strlen(str2))
        return 0;
    
    for(i=0;str1[i];i++)
        if(str1[i]!=str2[i])
        {
            if(str1[i]>='A' && str1[i]<='Z')
            {
                str1[i]=str1[i]+32;
                if(str1[i]!=str2[i])
                    return 0;
            }
            else
            if(str1[i]>='a' && str1[i]<='z')
            {
                str1[i]=str1[i]-32;
                if(str1[i]!=str2[i])
                    return 0;
            }
            else
                return 0;
        }

    return 1;
}
int compare_case_ignore(char s1[], char s2[])
{
    int i;
    for(i=0;s1[i];i++)
        if(s1[i]>='a' && s1[i]<='z')
            s1[i]-=32;
    for(i=0;s2[i];i++)
        if(s2[i]>='a' && s2[i]<='z')
            s2[i]-=32;
    for(i=0;s1[i]&&s2[i];i++)
        if(s1[i]!=s2[i])
            return 0;  //not same
    if(s1[i]==s2[i])
        return 1;  //same
    else 
        return 0;  //not same(different length strings)
}
int main()
{
    char str1[30]="    pravin tAlwarE1     ";
    char str2[20]="d k j";
    
    printf("%d",countWordString(str2));
    // ch*=trimString(str1);
    // printf("%s",trimString(str1));
    // printf("%s",str1);
    return 0;
}