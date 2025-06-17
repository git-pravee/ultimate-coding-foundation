// Assume price of 1 USD is INR 84.23. Write a program to take the amount in INR and convert it into USD.
#include<stdio.h>
int p1()
{
    float INR, USD;
    printf("Enter amount (in INR): ");
    scanf("%f",&INR);
    USD = INR / 84.23;
    printf("%.2f USD",USD);
    return 0;
}

// Write a program to take a three digit number from the user and rotate its digits by one position towards the right.
#include<stdio.h>
int p2()
{
    int n, k;
    printf("Enter three digit num: ");
    scanf("%d",&n);
    k = n % 10;
    n = n / 10;
    n = k * 100 + n;
    printf("Rotate one position toward the right: %d",n);
    return 0;
}

// What will be the value stored in the variable x after executing following statement: x=10>8>4;
// 0
#include<stdio.h>
int p3()
{
    int x;
    x=10>8>4;
    printf("%d",x);
    return 0;
}


// What will be the value stored in the variable x after executing following statement: x=!2>-2;
// 1
#include<stdio.h>
int p4()
{
    int x;
    x=!2>-2;
    printf("%d",x);
    return 0;
}


// What will be the value stored in the variable x after executing following statement: x=3<0&&5>0;
// 0
#include<stdio.h>
int p6()
{
    int x;
    x=3<0&&5>0;
    printf("%d",x);
    return 0;
}
