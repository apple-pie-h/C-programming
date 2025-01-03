#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j,temp=0,b[5];
	//input 
	for (i=0; i<5; i++)
	{
		printf("Enter");
		scanf("%d",&a[i]);
	}
	//ascending
	for (i=0; i<5; i++)
	{
		for (j=i+1; j<5; j++)
		{
		if (a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	
	} 
	}
	printf("\n in ascending order");
	for (i=0; i<5; i++)
	{
		printf("%d\t",a[i]);
	}
	
	// can also print i=4 to 0;
	//decending
	for (i=0; i<5; i++)
	{
		for (j=i+1; j<5; j++)
		{
		if (a[i]<a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	
	} 
	}
	printf("\n in decending order");
	for (i=0; i<5; i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
	return 0;
}
