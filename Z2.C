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
struct student s1;
clrscr();
s1.rno=1;
strcpy(s1.nm,"abc");
s1.marks=80;
printf("Student s1 roll no. is %d\n",s1.rno);
printf("Student s1 name is %s\n",s1.nm);
printf("Student s1 marks is %d",s1.marks);
getch();
}