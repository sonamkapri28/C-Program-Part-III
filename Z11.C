#include<stdio.h>
#include<conio.h>
struct student
{
	int rno;
	char nm[10];
	int marks[4];
};
void main()
{
struct student s[4];
int i,j;
clrscr();
for(i=0;i<4;i++)
{
printf("Enter student %d roll no ",i);
scanf("%d",&s[i].rno);
printf("Enter student %d name ",i);
scanf("%s",s[i].nm);
printf("Enter student %d marks ",i);
for(j=0;j<4;j++)
{

	scanf("%d",&s[i].marks[j]);
}
}

for(i=0;i<4;i++)
{
printf("\nStudent %d roll no. is %d\n",i,s[i].rno);
printf("Student %d name is %s\n",i,s[i].nm);
printf("Student %d marks are : ",i);
for(j=0;j<4;j++)
{
	printf("%d ",s[i].marks[j]);
}
}

getch();
}

