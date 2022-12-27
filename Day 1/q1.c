#include<stdio.h>
void main()
{
    int basic, hra, da, allow, pf, total;
    char grade;
    printf("Enter basic salary ");
    scanf("%d", &basic);
    printf("Enter grade ");
    scanf("%d", &grade);
    hra= (20/100)*basic;
    da=(50/100)*basic;
    pf=(11/100)*basic;
    if(grade == 'A')
    {
        allow=1700;
    }
    else if(grade == 'B')
    {
        allow=1500;
    }
    else
    {
        allow=1300;
    }
    total=basic+ allow+ hra+ da- pf;
    printf("Total salary is %d", total);
    }