#include<stdio.h>
void main()
{
    int i=0,j,k;
    printf("enter the j value ");
    scanf("%d",&i,&j,&k);
    do
    {
        k=i*j;
        printf("%d%d=%d\n,i,j,k");
        ++i;
    }
    while(i<10);
}