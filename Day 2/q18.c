#include<stdio.h>
#include<string.h>
void main()
{
    char s[10];
    int i,j,n,k;
    printf("Enter string ");
    gets(s);
    n=strlen(s);

    for(i=0;i<n;i++)
    {
        puts(s);
        s[i]='.';
    }

    /*for(i=1; i<=n; i++)
    {
        for(j=1; j<i; j++)
        {
            printf(".");
        }
        for(j=i-1; j<=n; j++)
        {
            printf("%c",s[j]);
        }
        printf("\n");
    }*/
}