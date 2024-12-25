//reverse 

#include <stdio.h>
#include<conio.h>
int main()
{
	int a,rev,b;
	printf("Enter a number");
	scanf("%d",&a);
	while (a!=0)
	{
		b=a%10;
		rev=rev*10+b;
		a=a/10;
	}
	printf("%d ", rev);
	return 0;
	getch();
}
