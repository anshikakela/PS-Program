#include<stdio.h>
void main()
{
    int i,j;
     for(i=5; i>0; i--)
     {
        for(j=i; j<=5; j++)
        {
            printf("%c", 'A'-1+j);
        }
        printf("\n");
     }
}