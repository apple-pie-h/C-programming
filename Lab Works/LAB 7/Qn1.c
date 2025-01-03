//enter 10 float in array

#include<stdio.h>
#include<conio.h>
int main()
{
	float a[10];
	int i;
	for (i=0; i<10; i++)
	{
		printf("Enter no in array");
		scanf("%f",&a[i]);
	}
	printf("\nArray is:");
	for (i=0; i<10; i++)
	{
		printf("%.2f\n",a[i]);
	}
	getch();
	return 0;
}

