#include<stdio.h>
#include<string.h>


// Write a program to convert a given string into lowercase
void p1()
{
    int i;
    char str[10];

    printf("Enter a string: ");
    fgets(str,10,stdin);
    str[strlen(str)-1]='\0'; 

    for(i=0;str[i];i++)
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;

    printf("convert into lowercase: %s",str);
} 

// Write a progarm to reverse a string
void p2()
{
    int i, l, t;
    char str[10];

    printf("Enter a string: ");
    fgets(str,10,stdin);
    str[strlen(str)-1]='\0';

    l=strlen(str);

    for(i=0;i<l/2;i++)
    {
        t=str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=t;
    }
    printf("Reverse String: %s",str);
}

// Write a program in C to count the total number of alphabet, digits and special characters in string.
int p3()
{
    int i,alpha=0,digit=0,other=0;
    char str[20];

    printf("Enter a string: ");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';

    for(i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            alpha++;
        else if(str[i]>='a' && str[i]<='z')
            alpha++;
        else if(str[i]>='0' && str[i]<='9')
            digit++;
        else
            other++;
    }

    printf("Total number of alphabets: %d\n",alpha);
    printf("Total number of digits: %d\n",digit);
    printf("Total number of special character: %d\n",other);
}

// Write a program to C to copy one string to another char array.
void p4()
{
    int i;
    char str[10], copy[10]={0};

    printf("Enter a string: ");
    fgets(str,10,stdin);
    str[strlen(str)-1]='\0';

    for(i=0;str[i];i++)
        copy[i]=str[i];

    copy[i]='\0';
    printf("%s\n",copy);

}

// Write a program to count the first occurrence of a given character in a given string.
void p5()
{
    char ch, str[10];
    int i;

    printf("Enter a string: ");
    fgets(str,10,stdin);
    str[strlen(str)-1]='\0';
    fflush(stdin);
    printf("Enter a character: ");
    scanf("%c",&ch);

    for(i=0;str[i];i++)
        if(ch==str[i])
        {
            printf("'%c' is found at index %d in %s",ch,i,str);
            break;
        }
        

    if(str[i]=='\0')
        printf("'%c' is not found in %s",ch,str);
}
int main()
{
    int x;
    p5();
    return 0;
}