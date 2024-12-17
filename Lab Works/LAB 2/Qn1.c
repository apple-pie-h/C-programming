//qn 1
//WAP to input name, roll no and marks in 5 subs and display them with percentage

#include<stdio.h>
#include<conio.h>
int main()
{
	char a[15];
	int r,i,m,t=0; 
	float p;
	printf("Enter name");
	gets(a);
	printf("Enter roll no");
	scanf("%d",&r);
	for (i=1; i<=5; i++)
	{
		printf("Enter marks [full marks 100]");
		scanf("%d",&m);
		if(m>100)
		{printf ("error");
		}
		else
		 t=t+m;
	}
	p=t/5;
	printf("\nName:%s\nRollno:%d\nPercentage:%f\n",a,r,p);
	return 0;
	getch();
}
