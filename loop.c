#include<stdio.h>
#include<conio.h>
void main()
{
int hindi,eng,maths ,science,sst,total,avg;
char grade;
printf("enter the marks for hindi,eng,maths,science,sst");
scanf("%d%d%d%d%d",&hindi,&eng,&maths,&science,&sst);
total=hindi+eng+maths+maths+science+sst;
printf("toal is %d",total);
avg=total/5;
printf("average is %d",avg);
if((avg>90)&&(avg<=100))
{
    grade='A';
    printf("you have scored:%c",grade);
}
else if((avg>90)&&(avg<=100))
{
    grade='B';
    printf("you have scored:%c",grade);
}

}


