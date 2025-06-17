#include<stdio.h>
int main()
{
    // printf("Hellowor\rld!");
    int i,j;
    for( ; ; )
    {
        printf("Enter two numbers: ");
        scanf("%d%d",&i,&j);
        if(i==0 || j==0)
            break;
        printf("%d + %d = %d\n",i,j,i+j);
    }
    return 0;
}