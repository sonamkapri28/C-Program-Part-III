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
struct student s[3];
int i;
clrscr();
for(i=0;i<3;i++)
{
printf("Enter student %d roll no ",i);
scanf("%d",&s[i].rno);
printf("Enter student %d name ",i);
scanf("%s",s[i].nm);
printf("Enter student %d marks ",i);
scanf("%d",&s[i].marks);
}

for(i=0;i<3;i++)
{
printf("Student %d roll no. is %d\n",i,s[i].rno);
printf("Student %d name is %s\n",i,s[i].nm);
printf("Student %d marks is %d\n",i,s[i].marks);
}

getch();
}
