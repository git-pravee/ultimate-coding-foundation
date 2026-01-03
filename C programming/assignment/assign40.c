/*
1. Write a function to store strings, taken from user, to the given 2d char array.
2. Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user.
3. Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
4. Write a function to store each word a string in a dimensional char array.
5. Write a function to remove duplicate names stored in the list of names in a 2d char array.
*/
#include<string.h>
#include<stdio.h>
void input(char str[][15], int size){
    int length;
    for(int i=0; i<size; i++){
        fgets(str[i], 15, stdin);
        length=strlen(str[i]);
        if(length!=15)
            str[i][length-1]='\0';
    }
}
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
void countVowelChar(char str[][15], int size){
    input(str, size);
    int count=0;
    for(int i=0; i<size; i++){
        count=countVowel(str[i]);
        printf("%s - %d\n", str[i], count);
    }
}
void sortCity(char str[][15], int size){
    // input(str, size);
    int i, j;
    char temp[15];
    for(i=1; i<9; i++){
        for(j=0; j<10-i; j++){
            if(strcmp(str[j], str[j+1])>0){
                strcpy(temp, str[j]);
                strcpy(str[j], str[j+1]);
                strcpy(str[j+1], temp);
            }
        }
    }
    for(int i=0; i<10; i++)
        printf("%s\n", str[i]);
}
void trim(char str[]){
    int len=strlen(str);
    int start=0, end=len-1, i=0;
    while(str[start]==' ')
        start++;
    while( end>=0 && str[end]==' ')
        end--;
    while(start<=end)
        str[i++]=str[start++];
    str[i]='\0';
}
char storeChar(char ch[]){
    trim(ch);
    char str[10][15];
    int i=0, k=0, j=0;
    while(ch[i]){
        str[k][j++]=ch[i++];
        if(ch[i]==' '){
            str[k][j]='\0';
            k++;
            j=0;
            while(ch[i+1]==' ') i++;
            i++;
        }
    }
    str[++k][0]='\0';
    for(int i=0; str[i][0]; i++)
        printf("%s\n", str[i]);
}
void removeDuplicate(char str[][15], int size){
    int i, j;
    char temp[15];
    for(i=1; i<9; i++){
        for(j=0; j<10-i; j++){
            if(strcmp(str[j], str[j+1])>0){
                strcpy(temp, str[j]);
                strcpy(str[j], str[j+1]);
                strcpy(str[j+1], temp);
            }
        }
    }
    int i=0, j=0;
    while(str[i][0]){
        if(strcmp(str[i], str[i+1])==0){
            while(strcmp(str[i], str[j+1]==0)) j++;
            i++;
            strcpy(str[i], str[j]);
        }
        i=j;
    }
    
    for(int i=0; str[i][0]; i++){
        printf("%s\n", str[i]);
    }
}
int main(){
    char str[10][15]={"nanded", "degloor", "jalana", "pune", "pune", "newyork", "delhi", "hyderabad", "delhi", "nashik"};
    char s[50]="  apple  hello     talware   ";
    // printf("hello");
    removeDuplicate(str);
    return 0;
}