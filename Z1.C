#include<stdio.h>
#include<conio.h>
struct student
{
	int rno;
	char nm[10];
	int marks;
}s1={1,"abc",80};
void main()
{
//struct student s1={1,"abc",80};
clrscr();
printf("Student s1 roll no. is %d\n",s1.rno);
printf("Student s1 name is %s\n",s1.nm);
printf("Student s1 marks is %d",s1.marks);
getch();
}