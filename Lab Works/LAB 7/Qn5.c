//array addition 3*2

#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][2],b[3][2],c[3][2],i,j,k,sum=0;
	printf("Elements of matrix A\n");
	for (i=0; i<3; i++)
	{
		for (j=0; j<2; j++)
		{
			printf("Enter no");
			scanf("%d",&a[i][j]);
		}
	}
		printf("\nElements of matrix B");
	for (i=0; i<3; i++)
	{
		for (j=0; j<2; j++)
		{
			printf("Enter no");
			scanf("%d",&b[i][j]);
		}
	}
	for (i=0; i<3; i++)
	{
		for (j=0; j<2; j++)
		{
	
	c[i][j]=a[i][j]+b[i][j];
	
		}
			}
	for (i=0; i<3; i++)
	{
		for (j=0; j<2; j++)
		{

			printf("%d\t",c[i][j]);
			
		}
		printf("\n");
		
	}
	getch();
	return 0;
}
