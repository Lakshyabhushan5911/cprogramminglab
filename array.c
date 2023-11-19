#include<stdio.h>
void main()
{
    int rollno[]={1,2,3,4,5,6},i,n,j;
    printf("enter the size of an array\n");
    scanf("%d",&n);
    printf("enter the values\n");
    for(i=0;i<=n;i++){
scanf("%d\n",&rollno[i]);
    }
    if(j=0,j<=n,j+=2){
printf("the even values are %d\n",rollno[j]);
    }
    else{
    printf("the odd values are %d\n",rollno[j]);
    }
}