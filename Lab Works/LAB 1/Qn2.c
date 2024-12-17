//qn 2 
//WAP to display your name and roll no.


#include<stdio.h>
#include<conio.h>
int main()
{
	char a[15];
	int r;
	printf("Enter name ");
	//gets(a);
	scanf("%[^\n]s",a);
	printf("Enter roll no");
	scanf("%d",&r);
	printf("\nName:%s\nRoll no:%d",a,r);
	getch();
	return 0;
}
