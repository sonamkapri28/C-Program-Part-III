#include<stdio.h>
#include<conio.h>
struct student
{
	int rno;
	char nm[10];
	int marks;
}s;
void main()
{
clrscr();
printf("size of struct student is %d",sizeof(s));
getch();
}