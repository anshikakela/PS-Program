#include<stdio.h>
int fac(int );
int fac(int n)
{
    int sum=0;
    int d=1;
    int a=1;
    for(int i=1; i<=n; i++)
    {
        int fac=1;
        for(int j=1; j<=a; j++)
        {
            fac=(fac*j);
        }
        a=a+2;
        sum=(sum+(i/fac)*d);
        d=d*(-1);
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