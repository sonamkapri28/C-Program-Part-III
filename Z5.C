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
struct student s1,s2,s3;
clrscr();
s1.rno=1;
strcpy(s1.nm,"abc");
s1.marks=80;
s2.rno=2;
strcpy(s2.nm,"def");
s2.marks=90;
s3.rno=3;
strcpy(s3.nm,"xyz");
s3.marks=100;

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