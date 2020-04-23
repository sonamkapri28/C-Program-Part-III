#include<stdio.h>
#include<conio.h>
main()
{
int n,i;
float sum=0.0;
clrscr();
printf("Enter the limit");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	i=1/i;
	sum=sum+i;
}
printf("Sum of series is %f",sum);
getch();
}