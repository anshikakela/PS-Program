#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter n ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        int k=0;
        for(j=1; j<=2*i-1; j++)
        {
            j<=i?k++:k--;
            printf("%d",k);
        }
        printf("\t");
    }
}