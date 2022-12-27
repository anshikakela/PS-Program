#include<stdio.h>
void main()
{
    int i,j,a,n;
 
    printf("Enter n ");
    scanf("%d",&n);
 
    for(i=1;i<=n;i++)
    {
        a = i;
        for(j=1;j<=i;j++)
        {
            printf("%c",(a+64));
            a++;
        }
         printf("\n");
    }
}