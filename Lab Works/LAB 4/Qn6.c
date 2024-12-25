//leap year or not 

#include<stdio.h>
#include<conio.h>
int main()
{
	int a; 
	printf("Enter year");
	scanf("%d",&a);
	if (a%4==0 && a%100!=0 || a%400==0)
	{
		printf("Leap year");
	}
	else 
	printf("not leap year");
	getch();
	return 0;
}
