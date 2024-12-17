//qn 5
//WAP to calculate simple interest for a given P, T and R 

#include<stdio.h>
#include<conio.h>
int main()
{
	float p,t,r,si=0;
	printf("Enter principle, time and rate ");
	scanf("%f %f %f",&p,&t,&r);
	si=(p*t*r)/100;
	printf("\nSimple Interest is: %f",si);
	getch();
	return 0;
}
