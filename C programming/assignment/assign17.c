#include<stdio.h>

// Write a program to draw the following patterns:
// 1.
/*
*
* *
* * *
* * * *
* * * * *
*/
void p1()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


// 2.
/*
        *
      * * 
    * * *
  * * * *
* * * * *
*/
void p2()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


// 3.
/*
* * * * *
* * * *
* * *
* *
*
*/
void p3()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}



// 2.
/*
* * * * *
  * * * *
    * * *
      * * 
        *
*/
void p4()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


// 5.
/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
void p5()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
                printf("%d",j);
            else
                printf(" ");
        }
        printf("\n");
    }
}


// 6.
/*
1
2 1
3 2 1
4 3 2 1
*/
void p6()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=i;
        for(j=1;j<=4;j++)
        {
            if(j<=i)
                printf("%d",k--);
            else
                printf(" ");
        }
        printf("\n");
    }
}


// 7.
/*
A B C D E
  A B C D
    A B C
      A B
        A 
*/
void p7()
{
    int i,j;
    char ch;
    for(i=1;i<=5;i++)
    {
        ch='A';
        for(j=1;j<=5;j++)
        {
            if(j>=i)
            {
                printf("%c",ch++);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}



// 8.
/*
1
2 3
4 5 6
7 8 9 10
*/
void p8()
{
    int i,j,n=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j<=i)
                printf("%d",n++);
            else
                printf(" ");
        }
        printf("\n");
    }
}


// 9.
/*
A B C D E
  B C D E
    C D E
      D E
        E
*/
void p9()
{
    int i,j;
    char ch;
    for(i=1;i<=5;i++)
    {
        ch='A'+i-1;
        for(j=1;j<=5;j++)
        {
            if(j>=i)
                printf("%c",ch++);
            else
                printf(" ");
            // ch++;
        }
        printf("\n");
    }
}


// 10.
/*
* * * * *
*       *
*       *
*       *
* * * * *
*/
void p10()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==1 || i==5 || j==1 || j==5)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}
int main()
{
    p9();
    return 0;
}