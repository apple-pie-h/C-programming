//one dimensional of 8 and sum and average 

#include<stdio.h>
#include<conio.h>
int main()
{
	int a[8],i,sum=0;
	float avg=0;
	for (i=0; i<8; i++)
	{
		printf("Enter");
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	avg=sum/8;
	printf("\nSum is: %d\nAverage is: %.2f",sum,avg);
	getch();
	return 0;
}
