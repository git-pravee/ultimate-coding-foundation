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
4. Write a program to check whether a given character is vowel of consonant or some other special character, using switch case statement.
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
int main()
{
    p2();
    return 0;
}