//qn 8 (c)
//wap to y=x>>z+z<<1(x=2,z=4)

#include<stdio.h>
#include<conio.h>
int main()
{
	int x=2, z=4; 
printf ("%d ",x>>2+z<<1); //Output: 0
printf("%d",x); //Output: 2
printf("%d",~x); //Output: -3
	return 0;
	getch();
}
