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
struct student s1,s2;
clrscr();
s1.rno=1;
strcpy(s1.nm,"abc");
s1.marks=100;
s2=s1;
printf("Rno of student s2 is %d\n",s2.rno);
printf("Name of student s2 is %s\n",s2.nm);
printf("Marks of student s2 is %d",s2.marks);
getch();
}