//2 integer and display sum of even nos

#include<stdio.h>
#include<conio.h>
int main()
{
	int a[2],i,sum=0; 
	printf("Enter 2 no");
	scanf("%d %d",&a[0],&a[1]);
	for (i=0; i<2; i++)
{
	if (a[i]%2==0)
	sum+=a[i];
}
printf("\n Sum is: %d",sum);
	getch();
	return 0;
}
