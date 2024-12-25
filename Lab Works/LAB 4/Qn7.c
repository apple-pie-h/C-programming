//quadratic equation 
#include<stdio.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	int a,  b, c, d;
	float root1, root2;
	printf("Enter quadratic coeffecient a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	d=pow((pow(b,2)-4*a*c),1/2);
	if (d>=0)
	
	{
	root1=(-b+d)/(2*a);
	root2=(-b-d)/(2*a);
}
printf("Roots are \n: %.2f \n:%.2f",root1,root2);
	getch();
	return 0;
}

