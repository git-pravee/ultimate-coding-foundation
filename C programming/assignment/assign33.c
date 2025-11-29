/*
1. Write a program to calculate the sum of two matrices each of order 3x3.
2. Write a program to calculate the product of two matrices each of order 3x3.
3. Write a program to print the transpose of given matrix.
4. Four players are playing a tournament of chess with round robin method (each player will play with every other player).
   Each win has 2 points, draw has 1 point and loose has 0 points. 
   Declare a score_board two dimensional array to store the scores of the players agains each player.
5. For que-4, define a function to update score_board after each match result.
6. For que-4, define a function to display score_board.
7. For que-4, define a function which returns the score of a specific player
8. For que-4, define a function to find the winner of the tournament.
9. For que-4, define a function to display rank of the players.
10. For que-4, define a function to run tournament, in which user has to enter result of each game and update score board using score_board function.  
*/
#include<stdio.h>
void p1(int a[3][3], int b[3][3])
{
    int c[3][3];
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            c[i][j]=a[i][j]+b[i][j];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            printf("%3d ", c[i][j]);
        printf("\n");
    }
}
void p2(int a[3][3], int b[3][3])
{
    int c[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            int result=0;
            for(int k=0; k<3; k++)
                result=result+a[i][k]*b[k][j];
            c[i][j]=result;
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            printf("%3d ", c[i][j]);
        printf("\n");
    }
}
void p3(int a[3][3])
{
    int temp;
    for(int i=0; i<3; i++)
        for(int j=i+1; j<3; j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}

int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3]={1,2,3,4,5,6,7,8,9};
    
    return 0;
}