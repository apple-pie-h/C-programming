//WAp largest and smallest among 3 numbers and display if it odd or even

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c; 
	printf("Enter 3 numbers");
	scanf("%d %d %d",&a,&b,&c);
	//largest
	if (a>b && a>c)
	{
	printf("%d is largest\n",a);
	if (a%2==0)
	printf("%d is even",a);
	else 
	printf("%d is odd",a);
}
else if (b>a && b>c)
	{
	printf("%d is largest\n",b);
	if (b%2==0)
	printf("%d is even",b);
	else 
	printf("%d is odd",b);
}
else
	{
	printf("%d is largest\n",c);
	if (c%2==0)
	printf("%d is even",c);
	else 
	printf("%d is odd",c);
}
printf("\n");

//smallest
	if (a<b && a<c)
	{
	printf("%d is smallest\n",a);
	if (a%2==0)
	printf("%d is even",a);
	else 
	printf("%d is odd",a);
}
else if (b<a && b<c)
	{
	printf("%d is smallest\n",b);
	if (b%2==0)
	printf("%d is even",b);
	else 
	printf("%d is odd",b);
}
else
	{
	printf("%d is smallest\n",c);
	if (c%2==0)
	printf("%d is even",c);
	else 
	printf("%d is odd",c);
}

	
	getch();
	return 0;
}
