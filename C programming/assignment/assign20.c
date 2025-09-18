/*
1. Write a program to find and display grade obtained by a student in a test. 
   Grading specifications are as follows:
   - Marks from 90 to 100 : Grade A
   - Marks from 80 to less than 90 : Grade B
   - Marks from 70 to less than 80 : Grade C
   - Marks from 60 to less than 70 : Grade D
   - Marks from 50 to less than 60 : Grade E
   - Marks from below 50 : Grade F
   - Marks greater than 100 or less than 0 : Inavalid marks
2. Write a menu driven program with the following options:
   1. Factorial of a number
   2. Check Even and Odd
   3. Area of circle
   4. Sum of first N natural numbers
   5. Exit
3. Write a program to check whether a given character is uppercase alphabet or lower case alphabet or some other special character, using switch case statemetnt.
4. Write a program to check whether a given character is vowel or consonant or some other special character, using switch case statement.
5. Write a menu driven program with the following options:
   1. Calculate LCM of two numbers
   2. Calculate sum of the digits of a number
   3. Volumbe of cuboid
   4. Check whether a given number is Prime or not
   5. Exit
*/
#include<stdio.h>
void p1()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    switch(marks)
    {
        case 91 ... 100:
            printf("Grade A\n");
            break;
        case 81 ... 90:
            printf("Grade B\n");
            break;
        case 71 ... 80:
            printf("Grade C\n");
            break;
        case 61 ...70:
            printf("Grade D\n");
            break;
        case 51 ... 60:
            printf("Grade E\n");
            break;
        case 1 ... 50:
            printf("Grade F\n");
            break;
        default:
            printf("Invalid marks\n");
    }
}
void p2()
{
    int status=1;
    while(status!=5)
    {
        printf("\nEnter a choice: \n");
        printf("1. Factorial of a number\n");
        printf("2. Check even or odd\n");
        printf("3. Area of circle\n");
        printf("4. Sum of first n natural numbers\n");
        printf("5. Exit\n");
        scanf("%d", &status);
        switch(status)
        {
            case 1:
                {
                    int fact=1, n;
                    printf("Enter a number: ");
                    scanf("%d", &n);
                    int temp=n;
                    while(n)
                    {
                        fact=fact*n;
                        n--;
                    }
                    printf("Factorial of %d is %d\n", temp, fact);
                }
                break;
            case 2:
                {
                    int num;
                    printf("Enter a number: ");
                    scanf("%d", &num);
                    if(num%2)
                        printf("It is odd number\n");
                    else
                        printf("It is even number\n");
                }
                break;
            case 3:
                {
                    int r;
                    printf("Enter a radius: ");
                    scanf("%d", &r);
                    printf("Area of circle is %.02f\n", 3.14*r*r);
                }
                break;
            case 4:
                {
                    int n, sum=0;
                    printf("Enter a number: ");
                    scanf("%d", &n);
                    int temp=n;
                    while(temp)
                    {
                        sum=sum+temp;
                        temp--;
                    }
                    printf("Sum of first %d natural number is %d\n", n, sum);
                }
                break;
            case 5:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid option! Please try again..\n");
        }
    }
}
void p3()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    switch(ch)
    {
        case 'A' ... 'Z':
            printf("Uppercase letter\n");
            break;
        case 'a' ... 'z':
            printf("Lowercase letter\n");
            break;
        case '0' ... '9':
            printf("Number\n");
            break;
        default:
            printf("Special character\n");
    }
}
void p4()
{
    char ch;
    printf("Enter a alphabet: ");
    scanf("%c", &ch);
    switch(ch)
    {
        case 'A': case 'E': case 'I': case 'O': case 'U':
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("It is a vowel\n");
            break;
        case 'B' ... 'D': case 'F' ... 'H': case 'J' ... 'N': case 'P' ... 'T': case 'V' ... 'Z':
        case 'b' ... 'd': case 'f' ... 'h': case 'j' ... 'n': case 'p' ... 't': case 'v' ... 'z':
            printf("Its is a consonent\n");
            break;
        default:
            printf("Special character\n");
    }
}
void p5()
{
    int status=1;
    while(status!=5)
    {
        printf("\nEnter a choice: \n");
        printf("1. Calculate LCM of two numbers\n");
        printf("2. Calculate sum of the digits of a number\n");
        printf("3. Volumbe of cuboid\n");
        printf("4. Check whether a given number is Prime or not\n");
        printf("5. Exit\n");
        scanf("%d", &status);
        switch(status)
        {
            case 1:
                {
                    int a, b, max;
                    printf("Enter a two numbers: ");
                    scanf("%d%d", &a, &b);
                    max=a>b?a:b;
                    while(1)
                    {
                        if(max%a==0 && max%b==0)
                        {
                            printf("%d and %d of lcm is %d\n", a, b, max);
                            break;
                        }
                        max++;
                    }
                }
                break;
            case 2:
                {
                    int n, digit=0, temp;
                    printf("Enter a number: ");
                    scanf("%d", &n);
                    temp=n;
                    while(temp)
                    {   
                        digit=digit+temp%10;
                        temp=temp/10;
                    }
                    printf("Sum of the digits of %d is %d\n", n, digit);
                }
                break;
            case 3:
                {
                    int l, b, h, vol;
                    printf("Enter a length, breadth and height: ");
                    scanf("%d%d%d", &l, &b, &h);
                    vol=l*b*h;
                    printf("Volume of cuboid is %d\n", vol);
                }
                break;
            case 4:
                {
                    int n, i;
                    printf("Enter a number: ");
                    scanf("%d", &n);
                    for(i=2;i<n;i++)
                        if(n%i==0)
                            break;
                    if(i==n)
                        printf("It is a prime number\n");
                    else
                        printf("It is not a prime number\n");
                }
                break;
            case 5:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid option! Please try again..\n");
        }
    }
}
int main()
{
    p5();
    return 0;
}