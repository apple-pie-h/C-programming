// factorial of given number

#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,fact;
	printf("Enter a no");
	scanf("%d",&n);
	for (i=n; i>0; i--)
	{
		fact*=i;
}
printf("Fact is %d",fact);
	getch();
	return 0;
}
