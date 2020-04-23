#include<stdio.h>
#include<conio.h>
main()
{
int n,sum=0,rem;
clrscr();
printf("Enter the no");
scanf("%d",&n);
while(n!=0)
{
	rem=n%10;
	sum=sum+rem;
	n=n/10;
}
printf("Sum of nos are %d",sum);
getch();
}