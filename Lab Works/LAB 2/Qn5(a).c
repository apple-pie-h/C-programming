//qn 5 
//wap to swap values without third variable

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b; 
	printf("Enter a and b ");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping\n: a=%d b=%d",a,b);
	return 0;
	getch();
}
