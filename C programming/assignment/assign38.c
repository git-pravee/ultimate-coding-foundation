/*
1. Write a function to check whether a given string is palindrome or not.
2. Write a function to trim a string (removing leading spaces from both the ends).
3. Write a function to count words in a given string.
4. Write a function to reverse a string word wise. 
   (For example if the given string is "Mysirg Education Services" then the resulting string should be "Services Education Mysirg")
5. Write a function to do case insensitive comparison of two strings.
*/
#include<stdio.h>
int length(char str[]){
    int i=0; 
    while(str[i]) i++;
    return i;
}
int palindrome(char str[]){
    int start=0, end=length(str)-1;
    while(start<end){
        if(str[start++]!=str[end--])
            return -1;
    }
    return 1;
}
void trim(char str[]){
    int len=length(str);
    int start=0, end=len-1, i=0;
    while(str[start]==' ')
        start++;
    while( end>=0 && str[end]==' ')
        end--;
    while(start<=end)
        str[i++]=str[start++];
    str[i]='\0';
}
int countWord(char str[]){
    trim(str);
    int count=0, start=0;

    while(str[start]){
        if((start==0 || str[start-1]==' ') && str[start]!=' ') count++;
        start++;
    }
    return count;
}
void strReverseWord(char str[]){
    trim(str);
    int countW=countWord(str);
    if(countW==0) return;

    int k=0;
    char word[countW][15];
    for(int i=0; i<countW; i++){
        int j=0;
        while(str[k]!=' ' && str[k])
            word[i][j++]=str[k++];
        
        word[i][j]='\0';
        while(str[k]==' ') k++;
    }

    k=0;

    for(int i=countW-1; i>=0; i--){
        for(int j=0; word[i][j]; j++)
            str[k++]=word[i][j];
        
        str[k++]=' ';
    }
    str[k-1]='\0';
}
int insensitive(char str1[], char str2[]){
    int len1=length(str1), len2=length(str2);
    if(len1!=len2) return 0;
    int i=0;
    while(str1[i]){

        // ❗ Incorrect:
        // (str1[i] | 32 == str2[i] | 32)
        // Because '==' has higher precedence than '|'
        // So expression becomes: (str1[i] | (32 == str2[i])) | 32
        // This breaks the logic completely.

        // ✔ Correct:
        // Convert both to lowercase using (ch | 32)
        // and compare THEM, not mixed expressions.
        if(((unsigned char)str1[i] | 32) == ((unsigned char)str2[i] | 32))
                i++;
        else return 0;
    }
    return 1;
}
int main(){
    char str[]="tPd1";
    char str2[]= "Tpd2";
    // trim1(str);
    // printf("%d", 1);
    
    printf("%d\n", insensitive(str, str2));
    return 0;
}