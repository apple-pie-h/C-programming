//y = x+x^2+x^3+....x^n (x and n given by user)

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int x, n,i;
float y=0;
	printf("Enter the value of x and n in y=x+x^2+x^3+...+x^n ");
	scanf("%d %d",&x,&n);
	for (i=1;i<=n;i++)
	{
		y+=pow(x,i);
	}
	printf("y= %.2f ",y);
	getch();
	return 0;
}
