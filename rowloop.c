#include<stdio.h>
void main()
{
    int i,j,rows;
    printf("enter no of rows");
    scanf("%d",&rows);
    for(i=1;j<=rows;++i)
    {
        for(j=1;j<=i;++j){
            printf("*");
        }
        printf("\n");
    }
}