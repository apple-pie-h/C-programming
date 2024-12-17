#include<stdio.h>
#include<conio.h>
int main()
{
	int x=6, y=3;

	printf("%c %6c %7c %6c %18s %6c %16s",'x','|', 'y','|',"expression",'|',"result" );
	printf("\n%d %6c %7d %6c %14s %10c x=%13d",x,'|', y,'|',"x=y+3",'|',y+3);

	printf("\n%d %6c %7d %6c %14s %10c x=%13d",x,'|', y,'|',"x=y-2",'|',y-2);
		printf("\n%d %6c %7d %6c %14s %10c x=%13d",x,'|', y,'|',"x=y*5",'|',y*5);
		printf("\n%d %6c %7d %6c %14s %10c x=%13d",x,'|', y,'|',"x=x/y",'|',x/y);
		printf("\n%d %6c %7d %6c %14s %10c x=%13d",x,'|', y,'|',"x=x%y",'|',x%y);
	return 0;
	getch();
}
