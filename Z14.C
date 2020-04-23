#include<stdio.h>
#include<conio.h>
struct student
{
	int rno;
	char nm[10];
	int marks;
};
void display(struct student []);
void main()
{
struct student s[3];
int i;
clrscr();
for(i=0;i<3;i++)
{
	printf("Enter %d student roll no ",i);
	scanf("%d",&s[i].rno);
	printf("Enter %d student name ",i);
	scanf("%s",s[i].nm);
	printf("Enter %d student marks ",i);
	scanf("%d",&s[i].marks);
}
display(s);
getch();
}
void display(struct student s[])
{
int i;
for(i=0;i<3;i++)
{
	printf("Student %d Roll no is %d\n",i,s[i].rno);
	printf("Student %d Name4 is %s\n",i,s[i].nm);
	printf("Student %d Marks is %d\n",i,s[i].marks);
}
}
