#include<stdio.h>
void main()
{
    int n,i;
    float max,num;
    printf("enter the no of elements");
    scanf("%d",&n);
    max=-999999999;
    for(i=0;i<n;++i)
{
    printf("enter the no");
    scanf("%d",&n);
    if(num>max)
    {
        max=num;
    }
}
printf("max no is:%2f\n",max);
}