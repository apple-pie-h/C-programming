// to read roll no., name, address, age & marks in physics, C, math in 1st sem of three students. store in
//std.txt display the student details with average marks

#include<stdio.h>
#include<conio.h>
struct student{
	char name[30], ad[30];
	int rollno, age, mp, c, mm;
};
int main()
{
	int i;
	struct student a[3];
	FILE *fptr; 
	fptr =fopen("std.txt","w+b");
	for (i=0; i<3; i++)
{
	printf("Enter name");
	scanf("%s", a[i].name);
	printf("Enter address");
	scanf("%s", a[i].ad);
	printf("Enter age");
	scanf("%d",&a[i].age);
		printf("Enter roll no");
	scanf("%d",&a[i].rollno);
	printf("Enter marks in physics");
	scanf("%d",&a[i].mp);
printf("Enter marks in C");
	scanf("%d",&a[i].c);
	printf("Enter marks in maths");
	scanf("%d",&a[i].mm);
	printf("\n");
}
fwrite(&a,sizeof(3),3,fptr);
fread(&a,sizeof(3),3,fptr);
printf("\Student Name\tAddress\tRoll no\tAge\tPhysics\tC\tMaths");
printf("\n--------------------------------------------------------------------");
for (i=0; i<3; i++)
{
	printf("\n%s\t\t\t%s\t%d\t%d\t%d\t%d\t%d\t",a[i].name, a[i].ad, a[i].age, a[i].rollno, a[i].mp,a[i].c,a[i].mm);
}

	fclose(fptr);
	getch();
	return 0;
}
