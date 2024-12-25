//wap to find sum of all individual digits in a no

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,sum;
	printf("Enter a nos");
	scanf("%d",&a);
	do {
		b=a%10; 
		sum+=b;
		a=a/10;
	}while (a!=0);
	printf("Sum is: %d",sum);
	getch();
	return 0;
}
