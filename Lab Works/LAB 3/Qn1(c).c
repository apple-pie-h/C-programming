#include<stdio.h>
#include<conio.h>
int main()
{
	char name[20], ad[30];
	int age, weight, height;
	printf("Enter name");
	gets(name);
	printf("Enter address");
	gets(ad);
	printf("Enter age, weight and height");
	scanf("%d %d %d",&age, &weight, &height);
	printf("\nName: %s\nAddress: %s\nAge: %d\nWeight: %d\nHeight: %d", name, ad, age, weight, height);
	return 0;
	getch();
}
