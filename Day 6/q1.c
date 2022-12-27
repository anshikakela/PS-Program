#include <stdio.h>
void main()
{
    int a[10][10], i, j, k, n, m;
    printf("Enter number of r and c  ");
    scanf("%d%d", &n, &m);
    printf("Enter elements\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = i; j < m; j++)
        {
            k=a[j][i];
            a[j][i]=a[i][j];
            a[i][j]=k;
        }
    }
    printf("\n");
    printf("\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    //reverse
    for(i=0; i<n; i++)
    {
        int k=0;
        for(j=0; i<m; j++)
        {
            
        }
    }
}