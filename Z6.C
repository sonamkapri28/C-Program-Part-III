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
printf("Enter student s1 roll no ");
scanf("%d",&s1.rno);
printf("Enter student s1 name ");
scanf("%s",s1.nm);
printf("Enter student s1 marks ");
scanf("%d",&s1.marks);
printf("Enter student s2 roll no ");
scanf("%d",&s2.rno);
printf("Enter student s2 name ");
scanf("%s",s2.nm);
printf("Enter student s2 marks ");
scanf("%d",&s2.marks);
printf("Enter student s3 roll no ");
scanf("%d",&s3.rno);
printf("Enter student s3 name ");
scanf("%s",s3.nm);
printf("Enter student s3 marks ");
scanf("%d",&s3.marks);

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
