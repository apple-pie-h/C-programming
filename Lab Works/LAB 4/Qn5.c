//Wap to check if divisible by both 7 , 5 or 11

#include<stdio.h>
#include<conio.h>
int main()
{
	int a; 
	printf("Enter a no");
	scanf("%d",&a);
	
	if (a%5==0)
	printf("Divisble by 5\n");
	if (a%7==0)
	printf("Divisble by 7\n");
	if (a%11==0)
	printf("Divisble by 11");
	getch();
	return 0;
 } 
