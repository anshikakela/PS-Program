#include <stdio.h>
int strong(int , int);
int strong(int a, int b)
{
    int r, sum, fac, t, i, j, k;
    for (i = a; i <= b; i++)
    {
        t = i;
        k = i;
        sum = 0;
        while (k > 0)
        {
            fac = 1;
            r = k % 10;
            k = k / 10;
            for (j = r; j >= 1; j--)
            {
                fac = fac * j;
            }
            sum = sum + fac;
        }

        if (sum == t)
        {
            printf("%d\n", t);
        }
    }
}
void main()
{
    int a,b;
    printf("Enter range ");
    scanf("%d%d", &a, &b);
    strong(a,b);
}