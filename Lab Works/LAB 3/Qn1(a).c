#include<stdio.h>
#include<conio.h>
#define plus +
#define minus -
#define multiply *
#define divide /
int main()
{
	float x,y;
	char ch1;
	printf("Enter two numbers");
	scanf("%f %f",&x,&y);
	printf("Enter (+,-,*,/)");
	ch1= getch();
	if (ch1=='+')
	{
		ch1= x plus y;
			printf("Sum is %d",ch1);
	}
	else if (ch1=='-')
	{
		ch1= x minus y;
			printf("difference is %d",ch1);
	}
	else if (ch1=='*')
	{
		ch1= x multiply y;
			printf("product is %d",ch1);
	}
	else if (ch1=='/')
	{
		ch1= x divide y;
			printf("division is %d",ch1);
	}
	else 
	{
		printf("Error");
	}
	/*
	switch(ch1)
	{
		case 'x':
			{
			ch1= x plus y;
			printf("Sum is %d",ch1);}
		
		case '-':
			{
			ch1= x minus y;
			printf("Sum is %d",ch1);}
			
		case '*':
			{
			ch1= x multiply y;
			printf("Sum is %d",ch1);}
				
		case '/':
			{
			ch1= x divide y;
			printf("Sum is %d",ch1);}
		break; 
		default: 
		printf ("Error");
		}
			*/
	
	getch();
	return 0;
}
