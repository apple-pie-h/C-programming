//from 1 to 100 divisible by 7

#include<stdio.h>
#include<conio.h>
int main()
{
	int a; 
	printf("Divisible by 7:\n");
	for (a=1; a<=100; a++)
	{
		if (a%7==0)
		printf("%d\n",a);
	}
	getch();
	return 0;
}
