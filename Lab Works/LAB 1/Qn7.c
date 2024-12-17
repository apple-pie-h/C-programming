//qn7
//WAP to find TSA of a cylinder 

#include<stdio.h>
#include<conio.h>
#define pi 3.1415
int main()
{
	float h,r,t=0;
	printf("Enter height and radius ");
	scanf("%g %g",&h,&r);
t=2*pi*r*(r+h);
printf("TSA is: %g");
	getch();
	return 0;
}
