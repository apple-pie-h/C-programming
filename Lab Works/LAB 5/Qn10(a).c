/*
1
1	4
1	4	9
1	4	9	16
1	4	9	16	25
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i,p,j; 
	for (j=0; j<5; j++){
	
	for (i=0; i<=j; i++)
	{
		p=pow(i+1,2);
		printf("%d\t", p);
	}
	printf("\n");
}
	
	getch();
	return 0;
}
