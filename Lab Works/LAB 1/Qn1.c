//qn 1
//WAP to display "hello world" in C

#include<stdio.h>
#include<conio.h>
int main()
{
	char a[15];
	scanf("%[^\n]s",a);
	//gets(a);
	printf("The text is %s\n",a);
	puts(a);
	getch();
	return 0;
}
