#include<stdio.h>
void main()
{
    int first=0,sec=1,third=2,i,n;
    printf("enter the length of fibonacci series\n");
    scanf("%d",&n);
    printf("the fibonacci series is\n");
    printf("%d%d",first,sec);
    for(i=2;i<=n;i++)
    {
        third=first +sec;
        printf("%d\n",third);
        first=sec;
        sec=third;
    }
    }