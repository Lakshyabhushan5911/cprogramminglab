#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the  no\n");
    scanf("%d%d",&a,&b);
    int x;
    printf("1=add 2-sub 3=mul 4=div");
    scanf("%d",&x);
   if(x==1)
   {
    c=a+b;
    printf("add:%d",c);
   }
else if(x==2)
{
c=a-b;
printf("sub:%d",c);
}
else if(x==3)
{
    c=a*b;
    printf("mul :%d",c);
}
else if(x==4)
{
    if(b==0){
        printf("infinity");
    }
    else{
        if(x==4)
        c=a%b;
        printf("div :%d",c);
    }
}}