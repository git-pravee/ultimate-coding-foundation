#include<stdio.h>
#include<string.h>


// Write a function to count frequency of each character of the given string.
void print_frequency(char str[])
{
    int f[128]={0},i;
    for(i=0;str[i];i++)
        f[str[i]]++;
    for(i=0;i<=127;i++)
        if(f[i]!=0)
            printf("%c - %d\n",i,f[i]);
}


// Write a function to find word in a given string.
int findWord(char str[], char s[])
{
    int i,j,k=0;
    for(i=0;str[i];i++)
        if(str[i]==s[k])
        {
            for(j=i,k=0;s[k];j++,k++)
                if(str[j]!=s[k])
                    return 0;
            return 1;
        }   
}
// by sir
int find_word(char str[], char word[])
{
    int i,j,l;
    l=strlen(word);
    for(i=0;str[i+l-1];i++)
    {
        for(j=0;word[j];j++)
        {
            if(str[i+j]!=word[j])
                break;
        }
        if(!word[j])
            if(i==0 && (str[i+l]==' ' || str[i+l]=='\0') || str[i-1]==' ' && (str[i+l]==' ' || str[i+l]=='\0'))
            return i;
    }
    return -1;
}

// Write a funtion to make first character of each word of the string capital.
char* capitalize(char str[])
{
    int i;
    if(str[0]>='a' && str[0]<='z')
        str[0]-=32;
    for(i=1;str[i];i++)
    {
        if(str[i]==' ')
            if(str[i+1]!=0 && str[i+1]!=' ')
                if(str[i+1]>='a' && str[i+1]<='z')
                    str[i+1]-=32;
    }
    return str;
}

// Write a function to make acronym name from a given name. For example, "Ramesh Chand Tiwari" becomes "R C Tiwari", "Bhavesh Gupta" becomes "B Gupta"
char* trim(char str[])
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
int count_words(char str[])
{
    // "MySirG    Education Services"
    int i,count=0;
    trim(str);
    for(i=0;str[i];i++)
    {
        if(str[i]==' ')
        {
            if(str[i]==str[i+1])
                continue;
            else   
                count++;
        }
    }
    return count+1;
}
char* accronym(char str[])
{
    int i,j,k,word_count;
    word_count=count_words(str);
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
    s[j][k]='\0';
    str[0]='\0';
    for(k=1,i=0;k<word_count;k++,i++)
    {
        str[i]=s[k-1][0];
        if(str[i]>='a'&&str[i]<='z')
            str[i]-=32;
        i++;
        str[i]=' ';
    }
    strcpy(str+i,s[word_count-1]);
    return str;
}


// Write a funtion to  concatenate two strings.
char* concatString(char s1[], char s2[])
{
    int i,j;
    i=strlen(s1);
    for(j=0;s2[j];j++)
        s1[i+j]=s2[j];
    s1[i+j]='\0';
    return s1;
}
int main()
{
    char str1[]="pravin  talware tao";
    char str2[]="talware";
    printf("%s",capitalize(str1));
    // printf("%d",findWord(str1,str2));
    return 0;
}