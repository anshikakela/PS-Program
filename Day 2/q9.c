#include<stdio.h>
void main()
{
    int i, j, a=1, n;
    printf("Enter n ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=n-i; j>=1; j--)
        {
            printf(" ");
        }
        for(j=1; j<=a; j++)
        {
            printf("*");
        }
        a=a+2;
        printf("\n");
    }
      n--; 
      a=a-4;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=a; j++) 
        {
            printf("*");
        }
        a=a-2;
        printf("\n");
    }
}