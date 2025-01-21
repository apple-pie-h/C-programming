//prime -> return 0; not prime -> return 0

#include<stdio.h>
#include<conio.h>
int prime(int);
int main()
{
	int a; 
	printf("Enter a no");
	scanf("%d",&a);
if (prime(a)) ///prime(a)==1
printf("not Prime");
else 
printf("prime");
	getch();
	return 0;
	
}

int prime(int n)
{
	int i,c=0; 
	for (i=1; i<=n; i++)
	{
	if (n%i==0)
	c++;
}
	if (c==2)
	return 0; 
	else 
	return 1;
}
