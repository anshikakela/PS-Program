#include<stdio.h>
void main()
{
    int i,n,j;
    printf("Enter n ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i==1 || i==n)
        {
            for(j=1; j<=n; j++)
            {
                printf("*");
            }
        }
        if(i>1 && i<n)
        {
            for(j=1; j<=n-i; j++)
            {
                printf(" ");
            }
            for(j=n-i+1; j<=n-i+1; j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}