#include<stdio.h>

// Write a program to draw the following patterns:

// 1.
/*
   *   
  ***  
 ***** 
*******
*/
void p1()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


// 2.
/*
*******
 ***** 
  ***  
   *   
*/
void p2()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


// 3.
/*
   *   
  * *  
 * * * 
* * * *
*/
void p3()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
            {
                if(k)
                    printf("*");
                else
                    printf(" ");
                k=1-k;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}



// 4.
/*
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/
void p4()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
            {
                printf("%d",k);
                j<4?k++:k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}


// 5.
/*
A B C D E F G
  A B C D E 
    A B C
      A
*/
void p5()
{
    int i,j;
    char ch;
    for(i=1;i<=4;i++)
    {
        ch='A';
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
                printf("%c",ch++);
            else
                printf(" ");
        }
        printf("\n");
    }
}


// 6.
/*
A B C D C B A
  A B C B A
    A B A
      A
*/
void p6()
{
    int i,j;
    char ch;
    for(i=1;i<=4;i++)
    {
        ch='A';
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {
                printf("%c",ch);
                j<4?ch++:ch--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}


// 7.
/*
    1
   1 1
  1 2 1
 1 2 2 1
1 2 3 2 1
*/
void p7()
{
    int i,j,k,n;
    for(i=1;i<=5;i++)
    {   
        k=1;
        n=1;
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            {
                if(k)
                {
                    printf("%d",n);
                    j<5?n++:n--;
                }
                else
                {
                    printf(" ");
                    if(j==5)
                        n--;
                }
                k=1-k;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}


// 8.
/*
* * * * * * *
* * *   * * *
* *       * *
*           *
*/
void p8()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j<=5-i || j>=3+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


// 9.
/*
1234321
123 321
12   21 
1     1
*/

void p9()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j<=5-i || j>=3+i)
            {
                printf("%d",k);
                j<4?k++:k--;
            }
            else
            {
                printf(" ");
                if(j==4)
                    k--;
            }
        }
        printf("\n");
    }
}


// 10.
/*
ABCDCBA
ABC CBA
AB   BA
A     A
*/
void p10()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
            if(j<=5-i || j>=3+i)
            {
                printf("%c",k);
                j<4?k++:k--;
            }
            else
            {
                printf(" ");
                if(j==4)
                    k--;
            }
        }
        printf("\n");
    }
}
int main()
{
    p10();
    return 0;
}