#include<stdio.h>
#include<conio.h>
void display(struct student);
struct student read(struct student);
struct student
{
	int rno;
	char nm[10];
	int marks;
};
void main()
{
struct student s1={1,"abc",80},s;
clrscr();
s=read(s1);
display(s);
getch();
}
struct student read(struct student s)
{
s.marks=s.marks+20;
return s;
}
void display(struct student s)
{
	printf("Roll no is %d\n",s.rno);
	printf("Name is %s\n",s.nm);
	printf("Marks is %d",s.marks);
}
