#include<stdio.h>
#include<conio.h>
struct student
{
	int roll;
	char name[10];
	int marks[5];
}s[3];
//struct student input;
//void display(struct student);
struct student input()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		printf("Enter student roll no : ");
		scanf("%d",&s[i].roll);
		printf("Enter student name : ");
		scanf("%s",s[i].name);
		printf("Enter student marks : ");
		scanf("%d",&s[i].marks);
	}
}
void display()
{
	int i;
	for(i=0;i<3;i++)
	{
	printf("Student's roll no : %d \n",s[i].roll);
	printf("Student's name : %s \n",s[i].name);
	printf("Student's marks : %d \n",s[i].marks);
	}
}
main()
{
  clrscr();
  input();
  display();
  getch();
}
