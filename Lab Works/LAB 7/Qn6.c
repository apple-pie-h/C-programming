//array multiplication 3*3

#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
	printf("Elements of matrix A\n");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf("Enter no");
			scanf("%d",&a[i][j]);
		}
	}
		printf("\nElements of matrix B");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf("Enter no");
			scanf("%d",&b[i][j]);
		}
	}
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
	for (k=0; k<3; k++)
	{
		sum+=a[i][k]*b[k][j];
	}
	c[i][j]=sum;
		sum=0;
		}
			}
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{

			printf("%d\t",c[i][j]);
			
		}
		printf("\n");
		
	}
	getch();
	return 0;
}
