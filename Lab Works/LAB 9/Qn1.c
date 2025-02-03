//Write a program to read RollNo, Name, Address, Age & marks in physics,
// C, math in 1st semester of three students in BCT and display the student
// details with average marks achieved.


#include<stdio.h>
#include<conio.h>
struct student{
int roll_no,age,mp,c,mm;
char name[20],ad[30];
};

int main()
{
int i;
float t[3];

struct student a[3];

for (i=0; i<3; i++)
{
t[i]=0;
printf("Enter name ");
scanf("%s",a[i].name);
printf("Enter address ");
scanf("%s",a[i].ad);
printf("Enter roll no, age");
scanf("%d %d", &a[i].roll_no, &a[i].age);
printf("Enter marks in physics, c and maths");
scanf("%d %d %d",&a[i].mp,&a[i].c,&a[i].mm);
t[i]=(a[i].mp +a[i].c +a[i].mm)/3;
}
for (i=0; i<3; i++){
printf("\nName: %s\nAddress: %s\nAge: %d\nRoll_No: %d\nAverage_Marks: %.2f\n",a[i].name,a[i].ad,a[i].age,a[i].roll_no, t[i]);
}
getch();
return 0;
}
