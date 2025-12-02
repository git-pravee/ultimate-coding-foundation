/*
1. Write a program to calculate the length of the string. (without using builtin method)
2. Write a program to count the occurrence of a given character is a given string.
3. Write a program to count vowels in a given string.
4. Write a program to count spaces in a given string.
5. Write a program to convert a given string into uppercase.
*/
#include<stdio.h>
int length(char str[]){
    int i=0;
    while(str[i] && str[i]!='\n')
        i++;
    return i;
}
// my logic
void occurrence1(char str[]){
    int i=0;
    while(str[i])
    {
        int count=1;
        for(int j=0; str[j]; j++)
            if(i!=j && str[i]==str[j])
                // duplicate found ahead
                if(i<j)
                    count++;
                // duplicate found behind - skip already counted char
                else    
                    i++;
        // print only if not end of string
        if(str[i]!='\0')
            printf("%c - %d\n", str[i], count);
        i++;
    }   
}
// standard way
void occurrence(char str[]){
    int visited[256]={0};
    for(int i=0; str[i]; i++){
        if(visited[(unsigned char)str[i]]==1)
            continue;
        int count=1;
        for(int j=i+1; str[j]; j++)
            if(str[i]==str[j]){
                count++;
                visited[(unsigned char)str[j]]=1;
            }
        printf("%c - %d\n", str[i], count);
    }
}
int countVowel(char str[]){
    char smallVisited[5]={'a','e','i','o','u'};
    char capVisited[5]={'A','E','I','O','U'};
    int countVow=0;
    for(int i=0; str[i]; i++){
        if(str[i]>='a' && str[i]<='z')
            for(int j=0; j<5; j++)
                if(str[i]==smallVisited[j])
                    countVow++;
        if(str[i]>='A' && str[i]<='Z')
            for(int j=0; j<5; j++)
                if(str[i]==capVisited[j])
                    countVow++;
    }
    return countVow;
}
int countVowel2(char str[]){
    int countVow=0;
    for(int i=0; str[i]; i++){
        char ch=str[i];
        switch(ch){
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                countVow++;
        }
    }
    return countVow;
}
int countSpace(char str[]){
    int countSpc=0;
    for(int i=0; str[i]; i++)
        if(' '==str[i])
            countSpc++;
    return countSpc;
}
void strUpper(char str[]){
    for(int i=0; str[i]; i++)
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;   
}
void strUpper2(char str[]){
    for(int i=0; str[i]; i++)
        if(str[i]>='a' && str[i]<='z')
            str[i]&=~32;   
}
int main(){
    char str[20]="pppE opq pI prAvin";
    // printf("enter a string: ");
    // fgets(str, 20, stdin);
    strUpper2(str);
    printf("%s\n", str);
    // printf("vowelcount : %d\n",countSpace(str));
    return 0;
}