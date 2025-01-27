//factorial and combination and permutation


#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact(int);
int main()
{
	float c,p;
int n, r,d;
printf("enter no for factorial");
scanf("%d",&d);
printf("\nfactorial is: %d",fact(d));

printf("\nEnter n and r");
scanf("%d %d",&n,&r);
if (n<r)
{ printf("Error");
}
else{
p=(fact(n))/(fact(n-1));
c=p/fact(r);
printf("Combination: %.2f",c);
printf("\n Permutation: %.2f",p);
}
	getch();
	return 0;
}

int fact(int n) /* Function Definition */
{
 int f=1;
 if(n <= 0)
 {
  return(1);
 }
 else
 {
  f = n * fact(n-1); /* Recursive Function Call as fact() calls itself */
  return(f);
 }
}
