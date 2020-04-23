#include<stdio.h>
#include<conio.h>
struct student
{
	int rno;
	char nm[10];
	int marks;
};//s1={1,"abc",80},s2={2,"def",90},s3={3,"xyz",100};
void main()
{
struct student s1={1,"abc",80},s2={2,"def",90},s3={3,"xyz",100};
clrscr();
printf("Student s1 roll no. is %d\n",s1.rno);
printf("Student s1 name is %s\n",s1.nm);
printf("Student s1 marks is %d\n",s1.marks);
printf("Student s2 roll no. is %d\n",s2.rno);
printf("Student s2 name is %s\n",s2.nm);
printf("Student s2 marks is %d\n",s2.marks);
printf("Student s3 roll no. is %d\n",s3.rno);
printf("Student s3 name is %s\n",s3.nm);
printf("Student s3 marks is %d",s3.marks);
getch();
}