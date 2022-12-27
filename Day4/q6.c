#include <stdio.h>
#include <math.h>
int arm(int ,int );
int arm(int a, int b)
{
    int sum, t, r, c ,i , s, k;
    for(i=a; i<=b; i++)
    {   
        sum=0;
        c = 0;
        t = i;
        s = i;
        k = i;
        while (k > 0)
        {
            k = k / 10;
            c = c + 1;
        }
        // printf("%d\n", c);
        while (t > 0)
        {
            r = t % 10;
            
            sum = sum +(int)(pow(r, c));
            t = t / 10;
        }
        if (sum == s)
        {
            printf("%d\n", s);
        }
    }
}
int main()
{
    int a,b;
    printf("Enter range ");
    scanf("%d%d",&a, &b);
    arm(a,b);
}