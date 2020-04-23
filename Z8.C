#include<stdio.h>
#include<conio.h>
struct student
{
	int rno;
	char nm[10];
	int marks;
};
void main()
{
struct student s[3];
int i;
clrscr();
s[0].rno=1;
strcpy(s[0].nm,"abc");
s[0].marks=80;
s[1].rno=2;
strcpy(s[1].nm,"def");
s[1].marks=90;
s[2].rno=3;
strcpy(s[2].nm,"xyz");
s[2].marks=100;

for(i=0;i<3;i++)
{
printf("Student %d roll no. is %d\n",i,s[i].rno);
printf("Student %d name is %s\n",i,s[i].nm);
printf("Student %d marks is %d\n",i,s[i].marks);
}
getch();
}
