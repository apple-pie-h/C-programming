// sum of first 50 natural no using recursive function

#include<stdio.h>
#include<conio.h>
int sum(int a);
int main()
{
	int a=50;
	printf("Sum is %d",sum(a));
	getch();
	return 0;
}

int sum(int a)
{
	if (a==0)
		return 0;
	else
	{
	return a+sum(a-1);
	}}
