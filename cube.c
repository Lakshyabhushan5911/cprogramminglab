#include<stdio.h>
void main()
{
    int i=1,cube;
do
{
    cube=i*i*i;
    i=i+1;
    printf("%d\n",cube);
}
while(i<=10);
}
