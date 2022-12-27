#include <stdio.h>
int perfect( int, int );
int perfect(int a , int b)
{
    for (int i = 1; i <= b; i++)
    {
        int sum=0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }
        if (sum == i)
        {
            if(i>=a && i<=b)
            {
                printf("%d\n", i);
            }
        }
    }
}
void main()
{
    int a,b;
    printf("Enter range ");
    scanf("%d%d", &a,&b);
    perfect(a,b);
}