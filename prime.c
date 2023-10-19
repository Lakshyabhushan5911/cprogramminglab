#include<stdio.h>
void main()
{
    int no,i,c=0;
    printf("enter the value");
    scanf("%d",&no);
    for(i=2;i<=no/2;i++){
        if(no%i==0){
            c++;
            break;
        }
    }
    if(c==0 && no!=1)
    printf("%d is a prime no\n",no);
    else
     printf("%d is not a prime no\n",no);
}
