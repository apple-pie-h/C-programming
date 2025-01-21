//hcf using recursion 
#include<stdio.h>
#include<conio.h>
int hcf (int a, int b)
{
	if (b==0)
	return a;
	else 
	return hcf(b,a%b);
}
int main()
{
	int a=5, b=7; 
	int hcf_var=hcf(a,b);
printf("%d",hcf_var);
getch();
return 0;
}
