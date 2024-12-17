//qn 4 
//WAP to calculate compound interest

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float ci,p,r,n;
	printf("Enter principle, rate and time period ");
	scanf("%f %f %f",&p,&r,&n);
	ci=p*(pow(1+r/100,n)-1);
	printf("Compound interest is %f",ci);
	return 0;
	getch();
}
