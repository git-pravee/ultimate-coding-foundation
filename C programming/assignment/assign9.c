// Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
#include<stdio.h>
int p1()
{
    float cost, sell, profit, loss;
    printf("Enter Cost and Sell price: ");
    scanf("%f%f",&cost, &sell);
    profit=sell-cost;
    loss=cost-sell;
    if(profit>loss)
        printf("Profit Percentage: %f",profit/cost*100);
    else
        printf("Loss Percentage: %f",loss/cost*100);
    return 0;
}


// Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whetehr the candidate passed the examination or failed.
#include<stdio.h>
int p2()
{
    int sub1,sub2,sub3,sub4,sub5;
    printf("Enter 5 subjects marks(out of 100): ");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    if(sub1>=33 && sub2>=33 && sub3>=33 && sub4>=33 && sub5>=33)
        printf("Passed the exam");
    else
        printf("Failed the exam");
    return 0;
}


// Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int p3()
{
    char ch;
    printf("Enter a alphabet: ");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
        printf("Uppercase");
    else if(ch>=97 && ch<=122)
        printf("Lowercase");
    else
        printf("Not an alphabet");
    return 0;
}


// Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
int p4()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n!=0 && n%3==0 && n%2==0)
        printf("Divisible by 3 and 2");
    else
        printf("Not divisible by 3 and 2");
    return  0;
}


// Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n!=0 && n%7==0)
        printf("Divisible by 7");
    else if(n!=0 && n%3==0)
        printf("Divisible by 3");
    else
        printf("Not divisible by 3 and 2");
    return  0;
}