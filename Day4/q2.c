#include<stdio.h>
int fun(int );
int fun(int n)
{
    int a[100];
    printf("Enter n ");
    scanf("%d", &n);
    printf("Enter elements ");
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        sum=sum+a[i];
    }
    printf("%d\n",sum);
    int mean=sum/n;
    printf("Mean= %d\n",mean);
    if(n % 2==0 )
    {
        int median1=(n/2);
        int median2=(n/2)+1;
        printf("Median 1= %d\nMedian 2= %d",a[median1], a[median2]);
    }
    else if (n%2 !=0)
    {
        int median=(n/2)+1;
        printf("Median= %d",a[median]);
    }
}
void main()
{
    int n;
    fun(n);
}