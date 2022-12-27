#include <stdio.h>
int pallin(int);
int pallin(int n)
{
    int i, rev = 0, r, t;
    t = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }
    if (rev == t)

    {
        printf("Pallindrome");
    }
    else
    {
        printf("Not Pallindrome");
    }
}
void main()
{
    int n;
    printf("Enter n ");
    scanf("%d", &n);
    pallin(n);
}