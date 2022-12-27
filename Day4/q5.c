#include <stdio.h>
int prime(int , int );
int prime(int a, int b)
{
    printf("Prime number are \n");
    for (int j = 1; j <=b; j++)
    {
        int c = 0;
        for (int i = 1; i <= j; i++)
        {
            if (j % i == 0)
            {
                c = c + 1;
            }
        }
        if (c == 2)
        {
            if(j>=a && j<=b)
            {
                printf("%d\n", j);
            }
        }
    }
}
void main()
{
    int a, b,c;
    printf("Enter range ");
    scanf("%d%d",&a, &b);
    prime(a,b);
}