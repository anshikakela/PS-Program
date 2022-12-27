#include<stdio.h>
#include<math.h>
void main()
{
    int x,sum,n;
    printf("Enter n and x ");
    scanf("%d%d",&n,&x);
    sum=1;
    int d=-1;
    for(int i=1; i<=n; i++)
    {
        int fac=1;
        for(int j=1; j<=i; j++)
        {
            fac=(fac*j);
        }
        sum=(sum+ (pow(x,i)/fac)*d);
        d=d*(-1);
    }
    printf("%d ",sum);
}