#include<stdio.h>
#include<conio.h>
#define plus +
#define minus -
#define multiply *
#define divide /
int main()
{
	float x,y;
	int ch1;
	char ch2;
	printf("Enter two numbers");
	scanf("%f %f",&x,&y);
	printf("Enter (+,-,*,/)");
	ch2= getch();
	if (ch2=='+')
	{
		ch1= x plus y;
			printf("Sum is %d",ch1);
	}
	else if (ch2=='-')
	{
		ch1= x minus y;
			printf("difference is %d",ch1);
	}
	else if (ch2=='*')
	{
		ch1= x multiply y;
			printf("product is %d",ch1);
	}
	else if (ch2=='/')
	{
		ch1= x divide y;
			printf("division is %d",ch1);
	}
	else 
	{
		printf("Error");
	}
	/*
	switch(ch2)
	{
		case 'x':
			{
			ch1= x plus y;
			printf("Sum is %d",ch1);
   break;}
		
		case '-':
			{
			ch1= x minus y;
			printf("Sum is %d",ch1);
   break;}
			
		case '*':
			{
			ch1= x multiply y;
			printf("Sum is %d",ch1);
   break;}
				
		case '/':
			{
			ch1= x divide y;
			printf("Sum is %d",ch1);
   break;}
		
		default: 
		printf ("Error");
		}
			*/
	
	getch();
	return 0;
}
