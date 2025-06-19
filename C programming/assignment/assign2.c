/*
1. Write a program to calculate average of three integers. Numbers are given by the user.
2. Write a program to calculate circumference of circle.
3. Write a program to calculate simple interest.
4. Write a program to calculate volume of a cuboid.
5. Write a program to ask user about the cost price and selling price banana per dozen. Calculate the profit or loss earned upon selling 25 bananas.
*/

#include<stdio.h>
void p1()
{
    int a, b, c;
    float avg;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    avg = (a + b + c) / 3.0;
    printf("Average = %f", avg);
}
void p2()
{
    int r;
    float c;
    printf("Enter radius: ");
    scanf("%d", &r);
    c = 2 * 3.14 * r;
    printf("Circumference of circle = %f", c);
}
void p3()
{
    int p, r, t;
    float si;
    printf("Enter principal, rate, time: ");
    scanf("%d%d%d", &p, &r, &t);
    si = (p * r * t) / 100.0;
    printf("SI = %f", si);
}
void p4()
{
    int l, w, h, v;
    printf("Enter length, width, breadth: ");
    scanf("%d%d%d", &l, &w, &h);
    v = l * w * h;
    printf("Voume of cuboid = %d", v);
}
void p5()
{
    float sp, cp, profit;
    printf("Enter cost price and sell price of 12 dozen of bananas: ");
    scanf("%d%d", &cp, &sp);
    profit = (sp - cp) / 12.0 * 25;
    printf("profit(+ve)/loss(-ve) = %f", profit);
}