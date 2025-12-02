/*
1. Write a program to convert a given string into lowercase.
2. Write a program to reverse a string.
3. Write a program in C to count the total number of alphabets, digits and special characters in a string.
4. Write a program in C to copy one string to another char array.
5. Write a program to find first occurance of a given character in a given string.
*/
#include<stdio.h>
void strLower(char str[]){
    for(int i=0; str[i]; i++)
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]|32;   
}
int length(char str[]){
    int i=0;
    while(str[i])
        i++;
    return i;
}
void strReverse(char str[]){
    int l=length(str);
    int start=0, last=l-1;
    char temp;
    while(start<last){
        temp=str[start];
        str[start++]=str[last];
        str[last--]=temp;
    }
}
void countChar(char str[]){
    int tAlphabet=0, tDigit=0, tSpecial=0;
    int i=0;
    while(str[i]){
        unsigned char c=str[i];
        tAlphabet += ((c | 32)>='a' && (c | 32)<='z');
        tDigit += (c>='0' && c<='9');
        tSpecial += !(((c | 32)>='a' && (c | 32)<='z') || (c>='0' && c<='9'));
        i++;
    }
    printf("%s of total alphabet is %d\n", str, tAlphabet);
    printf("%s of total digit is %d\n", str, tDigit);
    printf("%s of total special character is %d\n", str, tSpecial);
}
void copyArray(char str[], char cpystr[]){
    int i=0;
    while(str[i]){
        cpystr[i]=str[i];
        i++;
    }
    cpystr[i]='\0';
}
int occuranceChar(char str[], char ch){
    int i=0;
    while(str[i]){
        if(str[i]==ch)
            return 1;
        i++;
    }
    return -1;
}
int main(){
    char str[20]="*prAvii2n^";
    // printf("enter a string: ");
    // fgets(str, 20, stdin);
    // countChar(str);
    printf("%d\n", occuranceChar(str, '0'));
    // printf("vowelcount : %d\n",countSpace(str));
    return 0;
}