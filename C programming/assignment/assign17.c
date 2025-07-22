// Write a program draw the following patterns:
#include <stdio.h>
/*
 *
 * *
 * * *
 * * * *
 * * * * *
*/
void p1() {
  int i, j;
  for (i = 1; i <= 5; i++) 
  {
    for (j = 1; j <= i; j++) 
    {
      if (j <= i)
        printf("* ");
      else
        printf("  ");
    }
    printf("\n");
  }
}
/*
         *
       * *
     * * *
   * * * *
 * * * * *
*/
void p2()
{
  int i, j;
  for(i=1; i<=5; i++)
  {
    for(j=1; j<=5; j++)
    {
      if(j>=6-i)
        printf("* ");
      else
        printf("  ");
    }
    printf("\n");
  }
}
/*
 * * * * *
 * * * *
 * * *
 * *
 *
*/
void p3()
{
  int i, j;
  for(i=1; i<=5; i++)
  {
    for(j=1; j<=5; j++)
    {
      if(j<=6-i)
        printf("* ");
      else
        printf("  ");
    }
    printf("\n");
  }
}
/*
 * * * * *
   * * * *
     * * *
       * *
         *
*/
void p4()
{
  int i, j;
  for(i=1; i<=5; i++)
  {
    for(j=1; j<=5; j++)
    {
      if(j>=i)
        printf("* ");
      else
        printf("  ");
    }
    printf("\n");
  }
}
/*
 1
 1 2
 1 2 3
 1 2 3 4
 1 2 3 4 5
*/
void p5()
{
  int i, j;
  for(i=1; i<=5; i++)
  {
    for(j=1; j<=5; j++)
    {
      if(j<=i)
        printf("%d ", j);
      else
        printf("  ");
    }
    printf("\n");
  }
}
/*
1
2 1
3 2 1
4 3 2 1
*/

int main() {
  p5();
  return 0;
}