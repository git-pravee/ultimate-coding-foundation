/*
1. Assume price of 1 USD is INR 84.23. Write a program to take the amount in INR and convert it into USD.
2. Write a program to take a three digit number from the user and rotate its digits by one position towards the right.
3. What will be the value stored in the variable x after executing following statement: x=10>8>4;
4. What will be the value stored in the variable x after executing following statement: x=!2>-2;
5. What will be the value stored in the variable x after executing followin statement: x=3<0&&5>0;
*/
#include<stdio.h>
void p1()
{
    float inr, usd;
    printf("Enter amount in INR: ");
    scanf("%f", &inr);
    usd = inr / 84.23;
    printf("In USD = %f", usd);
}
void p2()
{
    int n, digit, sum=0;

    printf("Enter three digit number: ");
    scanf("%d", &n);
    while(n)
    {
        digit = n % 10;
        sum = sum * 10 + digit;
        n = n / 10;
    }
    printf("Reverse number: %d", sum);
}
void p3()
{
    int x = 10 > 8 > 4;
    printf("x = 10 > 8 > 4 \nx = %d", x);
}
void p4()
{
    int x = !2 > -2;
    printf("x = !2 > -2 \nx = %d", x);
}
void p5()
{
    int x = 3 < 0 && 5 > 0;
    printf("x = 3 < 0 && 5 > 0 \nx = %d", x);
}
int main()
{
    p5();
    return 0;
}