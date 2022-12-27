#include<stdio.h>
void main()
{
    char alphabet;
    printf("Enter the alphabet ");
    scanf("%c",&alphabet);
    if(alphabet=='A' || alphabet=='E' || alphabet=='O' || alphabet=='I' || alphabet=='U' || alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='0' || alphabet=='u')
    {
        printf("Vowel");
    }
    else 
    {
        printf("Consonant");
    }
}