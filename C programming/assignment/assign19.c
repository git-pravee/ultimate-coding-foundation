#include<stdio.h>
#include<stdlib.h>

// Write a program which takes the month number as an input and display number of days in that month.
void p1()
{
    int n;
    printf("Enter a month: ");
    scanf("%d",&n);
    switch(n)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 days");
            break;
        case 2:
            printf("28 or 29 days");
            break;
        case 4: case 6: case 9: case 11:
            printf("30 days");
            break;
        defualt:
            printf("Invalid month number");
    }
}



// 2. Write a menu driven program with the following options:
// 1. Addition
// 2. Subtraction
// 3. Multiplication
// 4. Division
// 5. Exit
void p2()
{
    int choice=1,a,b;
    while(choice!=5)
    {
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Exit");
        printf("\n\nEnter your choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: 
                printf("Enter two number: ");
                scanf("%d%d",&a,&b);
                printf("Sum is %d",a+b);
                break;
            case 2: 
                printf("Enter two number: ");
                scanf("%d%d",&a,&b);
                printf("Difference is %d",a-b);
                break;
            case 3: 
                printf("Enter two number: ");
                scanf("%d%d",&a,&b);
                printf("Product is %d",a*b);
                break;
            case 4: 
                printf("Enter two number: ");
                scanf("%d%d",&a,&b);
                printf("Quotient is %d",a/b);
                break;
            case 5:
                // exit(0);
                break;
            defualt:
                printf("Invalid Choice");
        }
    }
}


// 3. Write a program which takes day of a week and displays a unique greeting message for the day.
void p3()
{
    int n;
    printf("Enter the day number of week(mon=1): ");
    scanf("%d",&n);
    
    switch(n)
    {
        case 1:
            printf("Monday motivation");
            break;
        case 2:
            printf("Work hard on Tuesday");
            break;
        case 3:
            printf("No rest on Wednsday");
            break;
        case 4:
            printf("Lazy Thursday");
            break;
        case 5:
            printf("Thank God is Friday");
            break;
        case 6:
            printf("Saturday is for party");
            break;
        case 7:
            printf("Sunday is to sleep");
            break;
        defualt:
            printf("Invalid week of the day");
    }
}


// 4. Write a menu driven program with the following options:
// 1. Check whehter a given set of three numbers are lengths of an isosceles triangle or not
// 2. Check whehter a given set of three numbers are lengths of sides of a right angled triangle or not
// 3. Check whehter a given set of three numbers are equilateral triangle or not
// 4. exit
void p4()
{
    int choice=1,a,b,c;
    while(choice!=4)
    {
        printf("\n1. Check Isosceles Triangle");
        printf("\n2. Check Right angled Triangle");
        printf("\n3. Check Equilateral Triangle");
        printf("\n4. Exit");
        printf("\n\nEnter your choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: 
                printf("Enter three numbers: ");
                scanf("%d%d%d",&a,&b,&c);
                if(a+b>c && a+c>b && b+c>a)
                {
                    if(a==b || b==c || a==c)
                        printf("An isosceles triangle");
                    else
                        printf("Not an isosceles triangle");
                }
                else
                    printf("Not Trianle");
                break;
            case 2: 
                printf("Enter three numbers: ");
                scanf("%d%d%d",&a,&b,&c);
                if(a+b>c && a+c>b && b+c>a)
                {
                    if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
                        printf("Right angled triangle");
                    else
                        printf("Not right angled triangle");
                }
                else
                    printf("Not Trianle");
                break;
            case 3: 
                printf("Enter three numbers: ");
                scanf("%d%d%d",&a,&b,&c);
                if(a+b>c && a+c>b && b+c>a)
                {
                    if(a==b && a==c)
                        printf("Equilateral triangle");
                    else
                        printf("Not equilateral triangle");
                }
                else
                    printf("Not Trianle");
                break;
            case 4:
                // exit(0);
                break;
            default:
                printf("Invalid Choice");
        }
    }
}


// 5. Convert the following if-else-if construct into switch case:
/*
if(var==1)
    printf("good");
else if(var==2)
    printf("better");
else if(var==3)
    printf("best");
else
    printf("invalid");
*/
void p5()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("good");
            break;
        case 2:
            printf("better");
            break;
        case 3:
            printf("best");
            break;
        default:
            printf("Invalid");
    }
}


int main()
{
    p4();
    return 0;
}