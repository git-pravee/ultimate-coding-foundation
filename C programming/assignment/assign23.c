#include<stdio.h>

// Write a functionn to calculate LCM of two numbers. (TSRS)
int lcm(int a, int b)
{
    int L;
    for(L=a>b?a:b;L<=a*b;L++)
        if(L%a==0 && L%b==0)
            return printf("%d",L);
}


// Write a function to calculate HCF of two numbers. (TSRS)
int hcf(int a, int b)
{
    int H;
    for(H=a<b?a:b;H>=1;H--)
        if(a%H==0 && b%H==0)
            return printf("%d",H);
}


// Write a function to check whethe a given number is Prime or not. (TSRS)
int is_prime(int n)
{
    int i=2;
    while(i<n)
    {
        if(n%i==0)
            return 0;
        i++;
    }
    return 1;
}


// Write a function to find the next prime of a given number. (TSRS)

int next_prime(int num){
    while(!is_prime(++num));
    return num;
}


// Write a function to print first N numbers. (TSRN)
void print_first_N_prime(int n)
{
    int i=2;
    while(n)
    {
        printf("%d ",i);
        i=next_prime(i);
        n--;
    }
}
// int main()
// {
//     print_first_N_prime(36);
//     return 0;
// }