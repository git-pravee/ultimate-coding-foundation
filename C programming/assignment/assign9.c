/*
1. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
2. Write a program to take marks of 5 subjects from the user. Assum emarks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed. 
3. Write a program to check whether a given alphabet is in uppercase or lowercase. 
4. Write a program to check whether a given number is divisible by 3 and divisible by 2.
5. Write a program to check whether a given number is divisible by 7 or divisible by 3.
*/
#include<stdio.h>
void p1()
{
    float cp, sp, pl;
    printf("Enter cost price and sell price: ");
    scanf("%f%f", &cp, &sp);
    if(cp<sp)
        printf("Profit %.2f%%", (sp - cp) / cp * 100.0);
    else
        printf("Loss %.2f%%", (cp - sp) / cp * 100.0);
}
void p2()
{
    int a[5], k=0;
    printf("Enter 5 subjects marks out of 100: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < 5; i++)
    {
        if(a[i]<33)
        {
            k = 1;
            break;
        }
    }
    if(k)
        printf("Candidate failed!");
    else
        printf("Candidate passed!");
}
void p3()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch>=97 && ch<=122)
        printf("Lowercase");
    else if(ch>=65 && ch<=90)
        printf("uppercase");
    else
        printf("other letter");
}
void p4()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n%3==0 && n%2==0)
        printf("Divisible by 2 and 3");
    else
        printf("Not divisible by 2 and 3");
}
void p5()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n%7==0 && n%3==0)
        printf("Divisible by 7 and 3");
    else
    {
        if(n%7==0)
            printf("Divisible by 7");
        else if(n%3)
            printf("Divisible by 3");
        else
            printf("Not divisible by 7 or 3");
    }
}
