#include<stdio.h>
#include<conio.h>
#define plus +
#define minus -
#define mult *
#define divide /
int main()
{
	float x,y, z;
	printf("Enter two numbers");
	scanf("%f %f",&x,&y);
	z=x plus y;
	printf("\nSum is: %.2f",z);
	
		z=x minus y;
	printf("\ndifference is: %.2f",z);
		z=x mult y;
	printf("\nproduct is: %.2f",z);
		z=x divide y;
	printf("\nx/y is: %.2f",z);
	
	
	getch();
	return 0;
}
