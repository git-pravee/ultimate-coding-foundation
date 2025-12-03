/*
1. Write a function to calculate length of the string.
2. Write a function to reverse a string.
3. Write a function to compare two strings.
4. Write a function to transform string into uppercase.
5. Write a function to transform string into lowercase.
*/
#include<stdio.h>
int length(char str[]){
    int i=0;
    while(str[i]) i++;
    return i;
}
void reverse(char str[]){
    int l=length(str), start=0, last=l-1;
    char temp;
    while(start<last){
        temp=str[start];
        str[start++]=str[last];
        str[last--]=temp;
    }
}
int compare(char str[], char ptr[]){
    int i=0;
    while(str[i] && ptr[i]){
        if(str[i]!=ptr[i])
            return 0;
        i++;
    }
    return str[i]==ptr[i];
}
void uppercase(char str[]){
    int i=0;
    while(str[i]){
        unsigned char ch=str[i];
        if(ch>='a' && ch<='z')
            str[i] = ch & ~32;
        i++;
    }
}
void lowercase(char str[]){
    int i=0;
    while(str[i]){
        unsigned char ch=str[i];
        if(ch>='A' && ch<='Z')
            str[i] = ch | 32;
        i++;
    }
}
int main(){
    char str[]="prAViN&?";
    char ptr[]={32, 65, 0};
    lowercase(str);
    printf("%s\n", str);
    return 0;
}