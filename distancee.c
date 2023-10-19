#include<stdio.h>
#include<math.h>
void main()
{
float x1,y1,x2,y2,d;
printf("enter x and y  coordinates of first print\n");
scanf("%f%f", &x1, &y1);
printf("enter x and y  coordinates of second print\n");
scanf("%f%f", &x2, &y2);
d=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
printf("the distance between two points=%f",d);
}
