//hcf and lcm of 2 nos 

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,gcd,lcm, temp;
	printf("Enter 2 nos");
	scanf("%d %d",&c,&d);
	a=c;
	b=d;
	while (b!=0)
	{
		temp=b; 
		b=a%b;
		a=temp;
	}
	gcd=a;
	lcm=(c*d)/gcd;
	printf("LCM: %d\nHCF: %d",lcm,gcd);
	getch();
	return 0;
}
