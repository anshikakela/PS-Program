#include<stdio.h>
int fac(int );
int fac(int n)
{
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        int fac=1;
        for(int j=1; j<=i; j++)
        {
            fac=(fac*j);
        }
        fac=fac/i;
        sum=(sum+fac);
    }
   return (sum);
}
void main()
{
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    fac(n);
    printf("%d",fac(n));
}