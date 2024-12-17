//qn 5 
//wap to swap values with third variable

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,temp; 
	printf("Enter a and b ");
	scanf("%d %d",&a,&b);
temp=a;
	a=b;
	b=temp;
	printf("after swapping\n: a=%d b=%d",a,b);
	return 0;
	getch();
}
