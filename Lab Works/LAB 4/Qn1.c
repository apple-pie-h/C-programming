//input 5 marks rank of each subject and result and total marks 

#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	float a[5], total, percentage;
for (i=0; i<5; i++)
{
	
	printf("Enter marks(Physics/Chemistry/Math/English/Biology)");
	scanf("%f",&a[i]);
	total+=a[i];
}

percentage= total/5;
for (i=0; i<5; i++)
{

printf("Marks of subjects is: %.2f\n", a[i]);
}
printf("\nTotal:%.2f\nPercentage:%.2f",total, percentage);
if (percentage>95 && percentage<=100)
printf("Rank: Extra Ordinary");
else if(percentage>80 && percentage<=95)
printf("Rank: Distinction");
else if(percentage>65 && percentage<=80)
printf("Rank: First Division");
else if(percentage>55 && percentage<=65)
printf("Rank: Second Division");
else if(percentage>=40 && percentage<=55)
printf("Rank: Third Division");
else if(percentage<40)
printf("Rank: Fail");

	getch();
	return 0;
}
