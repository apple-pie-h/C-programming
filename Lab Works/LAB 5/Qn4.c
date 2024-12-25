//even nos from 1 to 50

#include<stdio.h>
#include<conio.h>
int main()
{
	int a; 
	printf("Even nos\n");
	for (a=1; a<=50; a++)
	{
		if (a%2==0)
		printf("%d\n",a);
	}
	getch();
	return 0;
}
