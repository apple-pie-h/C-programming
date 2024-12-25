//find sum y of the following series excluding prime numbers: y=1+1/1!+2^2/2!+....+10^2/10!

#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact(int);
int main()
{
	int a, b,i;
	float y=0;
	for (i=1; i<=10;i++)
	{
		y=y+(i*i)/(fact(i));
	}
	printf("y=%.6f",y+1);
	getch();
	return 0;
}

int fact(int n) /* Function Definition */
{
 int f=1;
 if(n <= 0)
 {
  return(1);
 }
 else
 {
  f = n * fact(n-1); /* Recursive Function Call as fact() calls itself */
  return(f);
 }
}
