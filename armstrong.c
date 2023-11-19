#include<stdio.h>
#include<math.h>
void main()
{
int no,originalno,remainder,result=0,n=0;
printf("enter an integer");
scanf("%d",&no);
originalno=no; 
while (originalno!=0){
    originalno/=10;
    ++n;
}
while (originalno!=0){
    remainder=originalno% 10;
    result+=pow(remainder,n);
    originalno/=10;
}
if(result=no)
{
    printf("%d is an armstrong no\n",no);
}
else{
    printf("%d is not an armstrong no\n",n);
}
}