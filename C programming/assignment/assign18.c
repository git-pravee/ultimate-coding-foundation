// Write a program to draw the following patterns:
#include <stdio.h>
/*
      *
    * * *
  * * * * *
* * * * * * *
*/
void p1()
{
  int i, j;
  for(i=1; i<=4; i++)
  {
    for(j=1; j<=7; j++)
    {
      if(j>=5-i && j<=3+i)
        printf("* ");
      else
        printf("  ");
    }
    printf("\n");
  }
}
/*
* * * * * * *
  * * * * *
    * * *
      *
*/
void p2()
{
  int i, j;
  for(i=1; i<=4; i++)
  {
    for(j=1; j<=7; j++)
    {
      if(j>=i && j<=8-i)
        printf("* ");
      else
        printf("  ");
    }
    printf("\n");
  }
}
/*
      *
    *   *
  *   *   *
*   *   *   *
*/
void p3()
{
  int i, j, k;
  for(i=1; i<=4; i++)
  {
    k=1;
    for(j=1; j<=7; j++)
    {
      if(j>=5-i && j<=3+i)
      {
        if(k==1)
        {
          printf("* ");
          k=0;
        }
        else
        {
          printf("  ");
          k=1;
        }
      }
      else
        printf("  ");
    }
    printf("\n");
  }
}
/*
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/
void p4()
{
  int i, j, k;
  for(i=1; i<=4; i++)
  {
    k=1;
    for(j=1; j<=7; j++)
    {
      if(j>=5-i && j<=3+i)
      {
        if(j<4)
          printf("%d ", k++);
        else
          printf("%d ", k--);
      }
      else
        printf("  ");
    }
    printf("\n");
  }
}
/*
A B C D E F G
  A B C D E
    A B C
      A
*/
void p5()
{
  int i, j;
  char ch;
  for(i=1; i<=4; i++)
  {
    ch='A';
    for(j=1; j<=7; j++)
    {
      if(j>=i && j<=8-i)
        printf("%c ", ch++);
      else
        printf("  ");
    }
    printf("\n");
  }
}
/*
A B C D C B A
  A B C B A
    A B A
      A
*/
void p6()
{
  int i, j;
  char ch;
  for(i=1; i<=4; i++)
  {
    ch='A';
    for(j=1; j<=7; j++)
    {
      if(j>=i && j<=8-i)
      {
        if(j<4)
          printf("%c ", ch++);
        else
          printf("%c ", ch--);
      }
      else
        printf("  ");
    }
    printf("\n");
  }
}
/*
        1
      1   1
    1   2   1
  1   2   2   1
1   2   3   2   1
*/
void p7()
{
  int i, j, k, l;
  for(i=1; i<=5; i++)
  {
    k=1;
    l=1;
    for(j=1; j<=9; j++)
    {
      if(j>=6-i && j<=4+i)
      {
        if(k==1)
        {
          if(j<4)
            printf("%d ", l++);
          else
            printf("%d ", l--);
          k=0;
          if(i%2==0 || i%4==0)
            l++;
        }
        else
        {
          printf("  ");
          k=1;
        }
      }
      else
        printf("  ");
    }
    printf("\n");
  }
}
int main()
{
  // enter the function you want to run
  p7();
  return 0;
}