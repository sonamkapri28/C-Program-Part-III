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
printf("Enter student roll no");
scanf("%d",&s1.rno);
printf("Enter student name");
scanf("%s",s1.nm);
printf("Enter student marks");
scanf("%d",&s1.marks);
printf("Student s1 roll no. is %d\n",s1.rno);
printf("Student s1 name is %s\n",s1.nm);
printf("Student s1 marks is %d",s1.marks);
getch();
}