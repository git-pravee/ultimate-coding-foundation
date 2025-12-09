/*
1. Write a function to count frequency of each character of the given string.
2. Write a function to find a word in a given string.
3. Write a function to make first character of each word of the string capital.
4. Write a function to make acronym name from a given name. 
   For example, "Ramesh Chand Tiwari" becomes "R C Tiwari", "Bhavesh Gupta" becomes "B Gupta"
5. Write a function to concatenate two strings.
*/
#include<stdio.h>
int length(char str[]){
    int i=0;
    while(str[i]) i++;
    return i;
}
void frequencyCountChar(char str[]){
    int i=0;
    char visited[256]="0";
    while(str[i]){
        if(visited[i]==1){
            i++;
            continue;
        } 

        int j=i+1;
        int count=1;
        visited[i]=1;

        while(str[j]){
            if(str[i]==str[j]){
                visited[j]=1;
                count++;
            }
            j++;
        }
        
        printf("%c - %d\n", str[i], count);
        i++;
    }
}
int findWord(char str[], char word[]){
    int i=0, j=0;
    while(str[i]){
        j=0;
        int temp=i;
        if(i==0 || str[i-1]==' '){
            while(word[j] && str[temp]==word[j]){
                temp++;
                j++;
            }
        }
        if(j==length(word) && (str[temp] == ' '|| str[temp] == '\0'))
            return i;
        i++;
    }
    return -1;
}
void capitalChar(char str[]){
    if(str[0]=='\0') return;
    if(str[0]>='a' && str[0]<='z')
        str[0] &= ~32;
    int i=1;
    while(str[i]){
        if(str[i-1]==' ' && str[i]>='a' && str[i]<='z')
            str[i] &= ~32;
        i++;
    }
}
int countWord(char str[]){
    int count=0, start=0;
    
    while(str[start]){
        if((start==0 || str[start-1]==' ') && str[start]!=' ') count++;
        start++;
    }
    return count;
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
void acronym(char str[]){
    char acro[50];
    trim(str);
    int tword=countWord(str);
    int start=0, i=0, j=0;
    while(i<tword){
        if((start==0 || str[start-1]==' ') && str[start]!=' '){
            if(str[start]>='a' && str[start]<='z')
                acro[j++]=str[start] & ~32;
            else acro[j++]=str[start];
            if(i<tword-1)
                acro[j++]=' ';
        }
        while((str[start]!=' ' && str[start] ) && i<tword-1){
            start++;
        }
        while(str[start]==' ' && str[start+1]==' ') start++;
        start++;
        i++;
    }
    while(str[start]){
        acro[j++]=str[start++];
    }
    acro[j]='\0';
    printf("%s\n", acro);
}
void concatenate(char str[], char ptr[]){
    int l=length(str)+length(ptr);
    char concat[l+2];
    int i=0, k=0;
    while(str[i]){
        concat[k++]=str[i++];
    }
    concat[k++]=' ';

    i=0;
    while(ptr[i]){
        concat[k++]=ptr[i++];
    }
    concat[k]='\0';
    printf("%s\n", concat);
}
int main()
{
    char str[]="hello pravin";
    char ptr[]="this is pravin";
    concatenate(str, ptr);
    printf("\n");
    return 0;
}