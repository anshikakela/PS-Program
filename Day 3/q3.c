#include<stdio.h>
#include<math.h>
void main()
{
    int i,x,j,sum,n;
    printf("Enter n and x ");
    scanf("%d%d",&n,&x);
    sum=1;
    for(i=1; i<=n; i++)
    {
        int fac=1;
        for(j=1; j<=i; j++)
        {
            fac=fac*j;
        }
        sum=sum+ (pow(x,i)/fac);
    }
    printf("%d ",sum);
}