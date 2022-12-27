#include<stdio.h>
void main()
{
    int a,b,c,x,y;
    printf("Enter value of a,b,c ");
    scanf("%d%d%d", &a,&b,&c);
    x=a>b?a:b;
    y=a>c?a:c;
    printf("Largest number is %d", y);
}   