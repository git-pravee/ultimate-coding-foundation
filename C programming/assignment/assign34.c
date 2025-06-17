#include<stdio.h>
#include<string.h>

// write a program to calculate the length of the string. (without using built-in mehtod)
void p1()
{
    int i;
    char str[50];
    printf("Enter a string\n");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';

    for(i=0;str[i];i++);
    printf("Length is %d",i);
}


// Write a program to count the occurrence of a given character in a given string.
void p2()
{
    char ch, str[50];
    int i, count=0;

    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter a character: ");
    fflush(stdin);
    scanf("%c",&ch);

    for(i=0;str[i];i++)
        if(ch==str[i])
            count++;

    printf("Count of %c in %s is : %d",ch,str,count);
}

// Write a program to count vowels in a given string
void p3()
{
    int i, j, count=0;
    char str[10], v[]="aeiouAEIOU";

    printf("Enter a string: ");
    fgets(str,10,stdin);
    str[strlen(str)-1]='\0';

    for(i=0;str[i];i++)
        for(j=0;v[j];j++)
            if(str[i]==v[j])
            {
                count++;
                break;
            }

    printf("Count of vowels in %s is : %d",str,count);
}

// Write a program to count spaces in a given string
void p4()
{
    int i, count=0;
    char str[50];

    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';

    for(i=0;str[i];i++)
        if(' '==str[i])
            count++;

    printf("Count of spaces in %s is : %d",str,count);
}

// Write a program to convert a given string into uppercase
void p5()
{
    int i;
    char str[10];

    printf("Enter a string: ");
    fgets(str,10,stdin);
    str[strlen(str)-1]='\0';

    for(i=0;str[i];i++)
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;

    printf("convert into uppercase: %s",str);
}
int main()
{
    int x;
    p1();
    return 0;
}