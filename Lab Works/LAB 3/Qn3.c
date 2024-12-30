#include<stdio.h>
#include<conio.h>
int main()
{
	float x=3.0, y=12.5, z=523.3, A=300.0, B=1200.5, C=5300.3;
	printf ("%c %6c %6s %14.1f| %14.1f| %14.1f|",'X','y',"z=",x,y,z );
		printf ("\n%c %6c %6s %14.1f| %14.1f| %14.1f|",'A','B',"C=",A,B,C );
		printf("\n----------------------------------------------------------------");
			printf ("\n%c %6c %6s %11c%.2f %11c%.2f %11c%.2f",'X','y',"z=",'|',x,'|',y,'|',z );
			printf ("\n%c %6c %6s %11c%.2f %9c%.2f %9c%.2f",'A','B',"C=",'|',A,'|',B,'|',C );
	getch();
	return 0;
}
