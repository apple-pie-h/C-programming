//fibonacci series upto 500th term 

#include<stdio.h>
#include<conio.h>
int main()
{
	long int i,a=1, b=1;
	printf("%lu %lu ",a,b);
	for (i=3; i<=250; i++)
	{
		a=a+b; 
		b=a+b;
			printf("%lu %lu ",a,b);
	}
	getch();
	return 0;
}
