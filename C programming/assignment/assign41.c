/*
1. Write a program to find words ending with a letter 's' and sotre each word in a 2d char array.
2. Write a function to return the most repeating character in a list of strings.
3. Write a function to check whether a pair of strings are anagram or not. Both the strings are stored in a 2d char array.
4. Write a function to store all the words in a given string which are starting from 'a', in a two dimensional char array.
5. A 2d array is full with 10 email ids. Write a function to find how many of them belongs to gmail.com
*/
#include<stdio.h>
#include<string.h>
void storeS(char ch[]){
    char str[10][20];
    char word[20];
    int i=0, j=0, k=0;
    while(ch[i]){
        if(ch[i]==' '){
            word[j]='\0';
            if(word[j-1]=='s')
                strcpy(str[k++], word);
            j=0;
            i++;
        }
        else
            word[j++]=ch[i++];  
    }
    word[j]='\0';
    if(word[j-1]=='s')
        strcpy(str[k++], word);
    str[k][0]='\0';
    for(int i=0; str[i][0]; i++)
        printf("%s\n", str[i]);
}
int main(){
    char ch[]="pair of   strings  ca  ts     starts";
    storeS(ch);
    return 0;
}