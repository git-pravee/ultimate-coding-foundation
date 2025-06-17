#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* getstring(char str[])
{
    strcpy(str,"hello");
    return str;
}
int main()
{
    char str[]="Hello, World!";
    char* ptr;
    // printf("%d\n",strlen(str));
    // str[0]='\0';
    // printf("%d",strlen(str));
    // ptr=hello();
    // printf("%s",str);
    int a[128]={0};
    char str1[]="abcd";
    printf("%d\n",a[97]);
    a[str1[0]]++;
    printf("%d",a[97]);
    // printf("%s",ptr);
    return 0;
}
/*
void pointerAndMemory()
{
    int *arr=(int*)malloc(5*(sizeof(int)));
    for(int i=0;i<5;i++)
    {
        arr[i]=i+1;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    free(arr);
}
void add(int x, int y)
{
    printf("%d\n",x+y);
}
void pointerToFunction()
{
    void (*func_ptr)(int, int)=add;// function pointer
    func_ptr(5,10);//calling function using pointer
}
struct Person
{
    char name[50];
    int age;
};
void pointerToStruct()
{
    struct Person person={"John",30};
    struct Person *p;
    p=&person;//pointer to struct
    printf("Name: %s, Age: %d\n",p->name,p->age);
}
void pointerArrays()
{
    char *names[]={"John","Alice","Bob"};
    for(int i=0;i<3;i++)
        printf("%s, ",names[i]);
}
void modifyValue(int *x)
{
    *x=20; //Dereferencing the pointer to modify the value
}
void pointerReference()
{
    int num=10;
    modifyValue(&num);
    printf("%d\n",num);
}
*/