#include<stdio.h>
#include<conio.h>
#define pi 3.1415
#define mult(a,b) (a*b)
#define sum(a,b) (a+b)
#define sub(a,b) (a-b)
#define div(a,b) (a/b)
int main()
{
	int a=8, b=4,c;
	c=pi*mult(a,b);
	printf("Multiplication * pi is %d",c);
	c=pi*sum(a,b);
	printf("\nSum * pi is %d",c);
	c=pi*sub(a,b);
	printf("\nSub*pi is %d",c);
	c=pi*div(a,b);
	printf("\ndivision is %d",c);
	getch();
	return 0;
}
