#include<stdio.h>
#include<conio.h>
struct student
{
	int rno;
	char nm[10];
	int marks;
}s[3]={
	{1,"abc",80},
	{2,"def",90},
	{3,"xyz",100}
	};
void main()
{
/*struct student s[3]={
			{1,"abc",80},
			{2,"def",90},
			{3,"xyz",100}
		     };*/
int i;
clrscr();
for(i=0;i<3;i++)
{
printf("Student %d roll no. is %d\n",i,s[i].rno);
printf("Student %d name is %s\n",i,s[i].nm);
printf("Student %d marks is %d\n",i,s[i].marks);
}
getch();
}