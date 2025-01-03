#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3],i, j, c[3][3];
	for (i=0; i<3;i++)
	{
		for (j=0; j<3; j++)
		{
			printf("Enter");
			scanf("%d",&a[i][j]);
			c[j][i]=a[i][j];
		}
	}
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}
