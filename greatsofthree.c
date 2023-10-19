#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the three no\n");
scanf("%d%d%d",&a,&b,&c);
if(c>a||c>b)
{
    if(b<a)
{
    printf("a is greatest");
}
else
{
    printf("b is greatest");
}
}
else
{
    printf("c is the greatest");
}
}