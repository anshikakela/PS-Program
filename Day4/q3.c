#include<stdio.h>
int fac(int );
int fac(int n)
{
    if(n==0 || n==1)
    {
        return (1);
    }
    else 
    {
        return(n* fac(n-1));
    }
}
void main()
{
    int i, n;
    printf("Enter n ");
    scanf("%d",&n);
    fac(n);
    printf("%d",fac(n));
}