#include<stdio.h>
void main() 
{
int ch;
float area,peri,s,r,l,w;
printf("1.circle\n 2. square\n 3. rectangle\n enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
    case 1:
    printf("enter the radius\n");
scanf("%f",&r);
area=3.14*r*r;
peri=2*3.14*r;
printf("area of circle=%f\n",area);
printf("peri of circle=%f\\n",peri);
break;
case 2:
printf("enter the sides of square\n");
scanf("%f",&s);
area=s*s;
peri=4*s;
printf("area of square=%f\n",area);
printf("peri of square=%f\n",peri);
break;
case 3:
printf("enter the length and width of rectangle\n");
scanf("\n%f\n%f",&l,&w);
area=l*w;
peri=2*(l+w);
printf("area of rect=%f\n",&area);
printf("peri of rect=%f\n",&peri);
break;
}
}