#include<stdio.h>
int pattern(int n);
void main()
{
    int x;
    printf("Enter n");
    scanf("%d",&x);
    pattern(x);
}
int pattern(int n)
{
    if(n>1)
    {
        printf("%d ",n);
        pattern(n-1);
    }
    printf("%d ",n);
}