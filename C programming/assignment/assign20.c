#include<stdio.h>
// 1. Write a program to find and display grade obtained by a student in test. Grading specifications are as follows:
// - Marks from 90 to 100: Grade A
// - Marks from 80 to less than 90: Grade B
// - Marks from 70 to less than 80: Grade C
// - Marks from 60 to less than 70: Grade D
// - Marks from 50 to less than 60: Grade E
// - Marks below 50: Grade F
// - Marks greater than 100 or less than 0: Invalid Options
void p1()
{
    int marks; 
    printf("Enter your marks: ");
    scanf("%d",&marks);

    switch(marks)
    {
        case 90 ... 100: 
            printf("Grade A");
            break;
        case 80 ... 89: 
            printf("Grade B");
            break;
        case 70 ... 79: 
            printf("Grade C");
            break;
        case 60 ... 69: 
            printf("Grade D");
            break;
        case 50 ... 59: 
            printf("Grade E");
            break;
        case 0 ... 49: 
            printf("Grade F");
            break;
        default:
            printf("Invalid marks");
    }
}


// 2. Write a menu driven program with the following options:
// 1. Factorial of a number
// 2. Check Even and Odd
// 3. Area of circle
// 4. Sum of first N natural numbers
// 5. exit
void p2()
{
    int n=1;
    while(n!=5)
    {
        printf("\n1. Factorial of number");
        printf("\n2. Check Even and Odd");
        printf("\n3. Area of circle");
        printf("\n4. Sum of first N natural numbers");
        printf("\n5. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d",&n);

        switch(n)
        {
            case 1: 
                {
                    int fact=1,i,m;
                    printf("Enter a number: ");
                    scanf("%d",&m);
                    for(i=1;i<=m;i++)
                        fact=fact*i;
                    printf("factorial is %d", fact);
                    break;
                }
            case 2:
                {
                    int j;
                    printf("Enter a number: ");
                    scanf("%d",&j);
                    printf(j&1?"Even":"Odd");
                    break;
                }
            case 3:
                {
                    int r;
                    float A;
                    printf("Enter a radius: ");
                    scanf("%d",&r);
                    A=3.14*r*r;
                    printf("Area of circle: %f",A);
                    break;
                }
            case 4:
                {
                    int sum=0,i,m;
                    printf("Enter a number: ");
                    scanf("%d",&m);
                    for(i=1;i<=m;i++)
                        sum=sum+i;
                    printf("Sum of first %d natural numbers is %d",m,sum);
                    break;
                }
            case 5:
                // exit(0);
                break;
            default:
                printf("Invalid choice");
        }
    }
}


// 3. Write a program to check whether a given character is uppercase alphabet or lower case alphabet or some other special character, uing switch case statement.
void p3()
{
    char n;
    printf("Enter a character: ");
    scanf("%c",&n);
    switch(n)
    {
        // case '0' ... '9':
        //     printf("digits");
        //     break;
        case 'A' ... 'Z':
            printf("Uppercase");
            break;
        case 'a' ... 'z':
            printf("Lowercase");
            break;
        default: 
            printf("Special Character");
    }
}


// 4. Write a program to check whether a given character is vowel or consonant or some other special character, using switch case statement.
void p4()
{
    char n;
    printf("Enter a character: ");
    scanf("%c",&n);
    switch(n)
    {
        case 'A': case 'E': case 'I': case 'o': case 'U':
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("Vowel");
            break;
        case 'B' ... 'D': case 'F' ... 'H': case 'J' ... 'N': case 'P' ... 'T': case 'V' ... 'Z':
        case 'b' ... 'd': case 'f' ... 'h': case 'j' ... 'n': case 'p' ... 't': case 'v' ... 'z':
            printf("Consonant");
            break;
        default: 
            printf("Special Character");
    }
}

// 5. Write a menu driven program with the following options:
// 1. Calculate LCM of two numbers
// 2. Calculate sum of the digits of a number
// 3. Volume of a cuboid
// 4. Check whether a given number is prime or not
// 5. Exit
void p5()
{
    int n=1;
    while(n!=5)
    {
        printf("\n1. Calculate LCM of two numbers");
        printf("\n2. Calculate sum of the digits of a number");
        printf("\n3. Calculate Volume of a cuboid");
        printf("\n4. Check prime or not");
        printf("\n5. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d",&n);

        switch(n)
        {
            case 1: 
                {
                    int a, b, L;
                    printf("Enter two numbers: ");
                    scanf("%d%d",&a,&b);
                    for(L=a>b?a:b;L<=a*b;L++)
                        if(L%a==0 && L%b==0)
                            break;
                    printf("LCM is %d",L);
                    break;
                }
            case 2:
                {
                    int n, sum=0;
                    printf("Enter a number: ");
                    scanf("%d",&n);
                    while(n)
                    {
                        sum=n%10+sum;
                        n=n/10;
                    }
                    printf("Total digits of sum is %d",sum);
                    break;
                }
            case 3:
                {
                    int l,b,h,v;
                    printf("Enter a length, height, breadth: ");
                    scanf("%d%d%d",&l,&h,&b);
                    v=l*b*h;
                    printf("Volume of cuboid: %d",v);
                    break;
                }
            case 4:
                {
                    int i,n;
                    printf("Enter a number: ");
                    scanf("%d",&n);
                    for(i=2;i<n;i++)
                        if(n%i==0)
                            break;
                    if(n==i)
                        printf("Prime number");
                    else
                        printf("Not prime number");
                    break;
                }
            case 5:
                // exit(0);
                break;
            default:
                printf("Invalid choice");
        }
    }
}

int main()
{
    p5();
    return 0;
} 