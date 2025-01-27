// add multiply divide function 

#include<stdio.h>
#include<conio.h>
int add (int, int);
int multiply(int, int);
int sub (int,int);
int div(int, int);
int main()
{ 
int a,b;

	printf("Enter two no");
	scanf("%d %d",&a,&b);
	printf("\nSum is: %d",add(a,b));
	printf("\nDifference is: %d",sub(a,b));
	printf("\nProduct is: %d",multiply(a,b));
	printf("\nDivision is: %d", div(a,b));
	

	return 0;
}

int add(int a,int b)
{
	int d=a+b;
	return d;
}
int div(int a, int b)
{
	int d=a/b;
	return d;
}
int multiply(int a,int b)
{
	int d=a*b;
	return d;
}
int sub(int a,int b)
{
	int d=a-b;
	return d;
}
