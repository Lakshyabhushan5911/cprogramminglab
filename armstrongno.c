#include<stdio.h>
#include<math.h>
void main()
{
int start,end,no,originalno,remainder,result,n;
printf("enter the starting no:");
scanf("%d",&start);
printf("enter the ending no");
scanf("%d",&end);
printf("armstrong no between %d and %d are:",start,end);
for(no=start;no<=end;++no){
    originalno=no;
    n=0;
    result=0;
while (originalno!=0){
    originalno/=10;
    ++n;
   } 
   originalno=no;
while (originalno!=0){
    remainder=originalno% 10;
    result+=pow(remainder,n);
    originalno/=10;
}
if(result==no)
{
    printf("%d",no);
}
}
}