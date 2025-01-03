//enter 10 float in array and largest and smallest element

#include<stdio.h>
#include<conio.h>
int main()
{
	float a[10],temp=0;
	int i;
	for (i=0; i<10; i++)
	{
		printf("Enter no in array");
		scanf("%f",&a[i]);
	}
//largest
for (i=0; i<10; i++)
{
	if (a[i]>temp)
	temp=a[i];
}
printf("Largest is %.2f",temp);
//smallest
temp=a[0];
for (i=0; i<10; i++)
{
	if (a[i]<temp)
	temp=a[i];
}
printf("\nSmallest is %.2f",temp);


	getch();
	return 0;
}

