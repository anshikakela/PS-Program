#include <stdio.h>
void main()
{
    int i, j, n;
    printf("Enter n");
    scanf("%d", &n);
    int c = 0;
    for (i = 1; i <= n; i++)
    {

        int a = n - i + 1;

        for (j = 1; j <= n - i + 1; j++)
        {
            printf("%d ", j);
        }
        if (i > 1)
        {
            for (j = 1; j <= (i - 1) * 4 - 2; j++)
            {
                printf(" ");
            }
        }
        if (c == 0 && i == 2)
        {
            for (int k = n - 1; k > 0; k--)
                printf("%d ", k);
            c = 1;
        }
        else
        {
            for (j = 1; j <= n - i + 1; j++, a--)
            {
                if (a == n)
                    continue;

                printf("%d ", a);
            }
        }

        printf("\n");
    }
}