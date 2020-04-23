#include<stdio.h>
#include<conio.h>
main()
{
int n1,n2,i,sum=0;
clrscr();
printf("Enter the first no");
scanf("%d",&n1);
printf("Enter the second no");
scanf("%d",&n2);
for(i=1;i<=n2;i++)
{
	sum=sum+n1;
}
printf("Multiplication without multiply is %d",sum);
getch();
}