/*
1. Write a function to count vowels in a given string.
2. Write a function to find a character in a given string.
   Return index of first occurrence of given character. Return -1 if character not found.
3. Write a function to find character in a given string between specifieds (start index (inclusive) and end index(exclusive)).
4. Write a function to swap two characters of a given string with specified indices.
5. Write a function to check whether a given string is an alphanumeric string or not.
   (Alphanumeric string must contain at least one alphabet and one digit).
*/
#include<stdio.h>
int countVowel(char str[]){
    int i=0;
    int count=0;
    while(str[i]){
        char ch=str[i];
        switch(ch){
            case 'A': case 'E': case 'I': case 'O': case 'U':
            case 'a': case 'e': case 'i': case 'o': case 'u':
            count++;
        }
        i++;
    }
    return count;
}
int firstOccurence(char str[], char ch){
    int i=0;
    while(str[i]){
        if(ch==str[i])
            return i;
        i++;
    }
    return -1;
}
int length(char str[]){
    int i=0; 
    while(str[i]) i++;
    return i;
}
int findCharRange(char str[], char ch, int start, int end){
    int len=length(str);
    if(start<0 || end>=len || start>end)
        return -1;
    while(start<=end){
        if(str[start]==ch)
            return start;
        start++;
    }
    return -1;
}
void swapChar(char str[], int a, int b){
    int len=length(str);
    if(a<0 || b<0 || a>=len || b>=len)
        return;
    if(a==b)
        return;
    char ch=str[a];
    str[a]=str[b];
    str[b]=ch;
}
int alphanumeric(char str[]){
    int i=0;
    int alpha, num;
    while(str[i]){
        unsigned char ch = str[i] | 32;
        if(ch>='a' && ch<='z')
            alpha=1;
        else if(ch>='0' && ch<='9')
            num=1;
        i++;
    }
    return alpha & num;
}
int main(){
    char str[]="*hellopravin";
    printf("%d", alphanumeric(str));
    printf("\n");
    return 0;
}
