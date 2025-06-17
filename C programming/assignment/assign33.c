#include<stdio.h>
void input()
{
    int a[3][3],b[3][3];
    int i,j;
    printf("Enter 9 values of First matrices\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    printf("Enter 9 values of second matrices\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);
}
void print(int a[][3])
{
    int i,j;
    printf("printing matrices\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}
// Write a program to calculate the sum of two matrices each of order 3x3.
void sum_of_matrices(int a[][3], int b[][3])
{
    int i,j;
    int c[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Sum of two matrices is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%2d ",c[i][j]);
        printf("\n");
    }
}
// Write a program to calculate the product of two matrices each of order 3x3
void product_of_matrices(int a[][3], int b[][3])
{
    int i,j,k,sum;
    int c[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0,sum=0;k<3;k++)
                sum=sum+a[i][k]*b[k][j];
            c[i][j]=sum;
        }
    }
    printf("product of two matrices is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%3d ",c[i][j]);
        printf("\n");
    }
}
// Write a program to print the transpose of a given matrix
void transpose_of_matrices(int a[][3])
{
    int i,j,k,temp;
    printf("before transpose of matrices is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%3d ",a[i][j]);
        printf("\n");
    }
    for(i=0,j=1,k=0;k<3;k++)
    {
        temp=a[i][j];
        a[i][j]=a[j][i];
        a[j][i]=temp;
        if(j-i==1)
            j++;
        else
            i++;
    }
    printf("transpose of matrices is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%3d ",a[i][j]);
        printf("\n");
    }
}
// four players are playing a tournament of Chess with round robin method (each player will play with every other player).
// Each win has 2 points, draw has 1 point and loose has 0 points.
// 1. Declare a score_board two dimensional array to store the scores of the players agains each player.
// 2. define a function to update score_board after each match result.
// 3. define a function ot display score_board
// 4. define a function which returns the score of a specific player
// 5. define a function to find the winner of the tournament
// 6. define a function to display rank of the players.
// 7. define a function to run tournament, in which user has to enter result of each game and update score board using score_board funtion.
void update_score_board(int p1,int p2,int result,int score_board[][4])
{
    score_board[p1][p2]=result;
    score_board[p2][p1]=2-result;
}
void display_score_board(int score_board[][4])
{
    int i,j;
    printf("\n****Score Board****\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            printf("%2d ",score_board[i][j]);
        printf("\n");
    }
}
int get_player_score(int player, int score_board[][4])
{
    int j,sum=0;
    for(j=0;j<=3;j++)
        sum=sum+score_board[player][j];
    return sum;
}
int find_winner(int score_board[][4])
{
    int player, score, winner, s1;
    player=0;
    winner=player;
    score=get_player_score(player,score_board);
    for(++player;player<=3;player++)
    {
        s1=get_player_score(player,score_board);
        if(score<s1)
        {
            winner=player;
            score=s1;
        }
    }
    return winner;
}
void sort(int a[],int n,int player_index[])
{
    int r,t,i;
    for(r=1;r<=n-1;r++)
    {
        for(i=0;i<=n-r-1;i++)
        {
            if(a[i]<a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
                t=player_index[i];
                player_index[i]=player_index[i+1];
                player_index[i+1]=t;
            }
        }
    }
}
void show_rank(int score_board[][4])
{
    int player_score[4],scores[4],player_index[4];
    int i;
    for(i=0;i<=3;i++)
    {
        player_score[i]=get_player_score(i,score_board);
        scores[i]=player_score[i];
        player_index[i]=i;
    }
    sort(scores,4,player_index);
    for(i=0;i<=3;i++)
        printf("%d) %d - Score %d\n",i+1,player_index[i],scores[i]);
}
void f4()
{
    int score_board[4][4]={0};
    update_score_board(0,1,2,score_board);
    update_score_board(0,2,1,score_board);
    update_score_board(0,3,2,score_board);
    update_score_board(1,2,1,score_board);
    update_score_board(1,3,0,score_board);
    update_score_board(2,3,0,score_board);
    printf("%d",get_player_score(2,score_board));
    display_score_board(score_board);
    printf("%d\n",find_winner(score_board));
    show_rank(score_board);
    
}
int main()
{
    int a[3][3]={2,-3,1,4,5,3,4,3,2};
    int b[3][3]={4,3,6,8,1,3,1,2,4};
    // transpose_of_matrices(a);
    f4();
    return 0;
}