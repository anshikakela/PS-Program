#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter n ");
    scanf("%d",&n);
    int a=1;
    int sum=0;
    for(i=1; i<=n; i++)
    {
        sum= sum+(a*(a+1)*(a+2));
        a=a+1;
    }
    printf("%d",sum);
}