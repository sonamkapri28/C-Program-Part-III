#include<stdio.h>
#include<conio.h>
main()
{
int n,i,mul;
clrscr();
printf("Enter the no");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
	mul=n*i;
	printf("%d * %d = %d \n",n,i,mul);
}
getch();
}