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
int main()
{
  // enter the function you want to run
  p3();
  return 0;
}