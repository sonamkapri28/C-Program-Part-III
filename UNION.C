#include<stdio.h>
#include<conio.h>
union student
{
	int i;
	float f;
}u;
main()
{
u.i=10;
u.f=20.4;
clrscr();
printf("%d\n",u.i);
printf("%f",u.f);
getch();
}