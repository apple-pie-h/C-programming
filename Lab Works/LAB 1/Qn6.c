//qn6
//WAP to find area of ellipse

#include<stdio.h>
#include<conio.h>
#define pi 3.1415
int main()
{
float m,ma,a=0;
printf("Enter major axis and minor axis ");
scanf("%f %f",&ma,&m);
a=pi*ma*m;
printf("Area is: %f",a);
	getch();
	return 0;
}
