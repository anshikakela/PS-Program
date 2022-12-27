#include<stdio.h>
void main()
{
    int n,j,k;
    printf("Enter n ");
    scanf("%d",&n);
    int x=2*n-1;
    int a=0;
    int b=x-1;
    int array[x][x];
    while(n!=0)
    {
        for(j=a; j<=b; j++)
        {
            for(k=a; k<=b; k++)
            {
                if(j==a || k==a || j==b || k==b)
                {
                    array[j][k]=n;
                }
            }
        }
        ++a;
        --b;
        --n;
    }
    for(j=0; j<x; j++)
    {
        for(k=0; k<x; k++)
        {
            printf("%d",array[j][k]);
        }
        printf("\n");
    }
}