#include<stdio.h>
void main()
{
    int n, a,i,j;
    printf("Enter n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
   {
    a=i;
        for(j=1; j<=i; j++)
        {
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }
} 