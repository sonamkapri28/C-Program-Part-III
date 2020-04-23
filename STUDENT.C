#include<stdio.h>
#include<conio.h>
struct student
{
	int roll;
	char name[10];
	int marks[5];
}s;
main()
{
	int i;
	clrscr();
	printf("Enter student roll no : ");
	scanf("%d",&s.roll);
	printf("Enter student name : ");
	scanf("%s",s.name);
	printf("Enter student marks : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&s.marks[i]);
	}
	printf("Student's roll no : %d \n",s.roll);
	printf("Student's name : %s \n",s.name);
	printf("Student's marks : ");
	for(i=0;i<5;i++)
	{
		printf("%d ",s.marks[i]);
	}
	getch();
}