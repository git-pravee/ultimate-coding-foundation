#include<stdio.h>

// write a program to calculate average of three integers. numbers are given by the user.
int p1()
{
    float avg;
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a,&b,&c);
    avg = (a+b+c) / 3.0;        // formulaa of average
    printf("Average of three numbers: %.2f", avg);
    return 0;
}

// write a program to calculate circumference of a circle.
int p2()
{
    int r; 
    float circumference;
    printf("Enter Radius: ");
    scanf("%d", &r);
    circumference = 2 * 3.14 * r;       // formula of circumference of a circle
    printf("Circumference of circle: %.2f", circumference);
    return 0;
}

// write a program to calculate simple interest.
int p3()
{
    int p, t;
    float r, si;
    printf("Enter Principal amount: ");
    scanf("%d",&p);
    printf("Enter Interest Rate: ");
    scanf("%f",&r);
    printf("Enter Time (in years): ");
    scanf("%d",&t);
    si = p * r * t / 100;       // formula of simple interest
    printf("Simple Interest: %.2f",si);
    return 0;
}

// write a program to calculate volume of cuboid.
int p4()
{
    int volume, l, h, b;
    printf("Enter length, height and breadth: ");
    scanf("%d%d%d",&l,&h,&b);
    volume = l * h * b;         //formula of volume of cuboid
    printf("Volume of cuboid: %d",volume);
    return 0;
}

// write a program to ask user about the cost price and selling price banana per dozen. calculate the profit or loss earned upon selling 25 bananas.
int p5-a()
{
    float cp, sp, profit;
    printf("Enter cost price and sell price of 12 bananas: ");
    scanf("%f%f",&cp,&sp);
    profit=(sp-cp)/12*25;
    printf("Profit(+ve)/Loss(-ve) : %f",profit);
    return 0;
}
int p5-b()
{
    int cost, sell;
    float total_cost, total_sell, profit_loss;
    printf("Enter cost price and sell price: ");
    scanf("%d%d",&cost,&sell);
    total_cost = cost / 12.0 * 25;
    total_sell = sell / 12.0 * 25;
    profit_loss = total_sell - total_cost;
    printf("Selling 25 bananas on profit or loss: %.2f", profit_loss);
    return 0;
}