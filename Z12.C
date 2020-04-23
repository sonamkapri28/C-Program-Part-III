#include<stdio.h>
#include<conio.h>
void display(struct student);
struct student
{
	int rno;
	char nm[10];
	int marks;
};
void main()
{
struct student s1={1,"abc",80};
clrscr();
display(s1);
getch();
}
void display(struct student s)
{
	printf("Roll no is %d\n",s.rno);
	printf("Name is %s\n",s.nm);
	printf("Marks is %d",s.marks);
}