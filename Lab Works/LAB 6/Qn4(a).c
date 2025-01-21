//fibonacci using recursion

#include<stdio.h>
#include<conio.h>
int fib(int);
int main()
{
int c,i; 
printf("Enter no of terms");
scanf("%d",&c);
for (i=1; i<=c; i++)
	{
	printf("%d\t", fib(i));
}	getch();
	return 0;
}

int fib(int n)
{
	if (n==1 || n==0)
	return 0;
	else if (n==2)
	return 1;
	else 
	return (fib(n-1)+fib(n-2));
}
