/*
1. Write a program which takes the month number as an input and display number of days in that month.
2. Write a menu driven program with the following options:
   a. Addition
   b. Subtraction
   c. Multiplication
   d. Division
   e. Exit
3. Write a program which takes the day number of a week and displays a unique greeting message for the day.
4. Write a menu driven program with the following options:
   a. Check whether a given set of three numbers are lengths of an isosceles triangle or not
   b. Check whether a given set of three numbers are lengths of sides of a right angle triangle or not
   c. Check whether a given set of three numbers are equilateral triangle or not
   d. Exit
5. Convert the following if-else-if construct into switch case:
   if(var == 1)
     printf("good");
   else if(var == 2)
     printf("better");
   else if(var == 3)
     printf("best");
   else
     printf("invalid");
*/
#include<stdio.h>
void p1()
{
  int month;
  printf("Enter month number: ");
  scanf("%d", &month);
  switch(month)
    {
      case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("31 days");
        break;
      case 4: case 6: case 9: case 11:
        printf("30 days");
        break;
      case 2:
        printf("28 days");
        break;
      default:
        printf("Invalid month number");
    }
}
void p2()
{
  int a, b, c, d=1;
  while(d!=5)
  {   
    printf("Select operation: \n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
    printf("Enter operation: ");
    scanf("%d", &c);
    
    switch(c)
    {
      case 1:
      {
        printf("\nEnter two numbers: ");
        scanf("%d%d", &a, &b);
        printf("Addition = %d", a+b);
        break;
      }
      case 2:
      {
        printf("\nEnter two numbers: ");
        scanf("%d%d", &a, &b);
        printf("Subtraction = %d", a-b);
        break;
      }
      case 3:
      {
        printf("\nEnter two numbers: ");
        scanf("%d%d", &a, &b);
        printf("Multiplication = %d", a*b);
        break;
      }
      case 4:
      {
        printf("\nEnter two numbers: ");
        scanf("%d%d", &a, &b);
        printf("Division = %d", a/b);
        break;
      }
      case 5:
      {
        printf("Exit");
        return;
      }
      default:
        printf("Invalid operation");
    }
  printf("\n");
  }
} 
void p3()
{
  int day;
  printf("Enter day number: ");
  scanf("%d", &day);
  switch(day)
  {
    case 1:
      printf("Monday is a working day");
      break;
    case 2:
      printf("Tuesday is lovely day");
      break;
    case 3:
      printf("Wednesday is special day");
      break;
    case 4:
      printf("Thursday is very good day");
      break;
    case 5:
      printf("Friday is stressful day");
      break;
    case 6:
      printf("Saturday is half day");
      break;
    case 7:
      printf("Sunday is fun day");
      break;
    default:
      printf("Invalid day number");
      break;
  }
}
void p4()
{
  
}
int main()
{
  // enter the function you want to run
  p2();
  return 0;
}