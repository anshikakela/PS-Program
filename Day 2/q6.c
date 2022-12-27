#include<stdio.h>
void main()
{
    int b, i,j,a,n;
    printf("Enter n");
    scanf("%d",&n);
      b=2;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        a=i;
        for(j=1; j<=i; j++)
        {
            printf("%d", a);
            a++;
        }
        if(i>1)
        {
            for(j=1; j<=i-1; j++)
            {
                printf("%d",b);
                b--;
            }
             b=b+(i+1);
        }
        printf("\n");
    }
}