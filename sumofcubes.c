#include<stdio.h>
void main()  
{ 
    int i,n, no,sum=0,digit,cube;
    printf("enter the no:");
    scanf("%d",&no);
    for (i=1;i<=5;i++){
    {
        digit=no%10;
        cube=digit*digit*digit;
        sum+=cube;
        no/=10;
    }
    printf("sum of digits:%d\n",sum);
}
}