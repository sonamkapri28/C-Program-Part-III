#include<stdio.h>
#include<conio.h>
main()
{
int n1,n2,t;
clrscr();
printf("Enter first no");
scanf("%d",&n1);
printf("Enter second no");
scanf("%d",&n2);
t=n1;
n1=n2;
n2=t;
printf("Result after swapping %d %d",n1,n2);
getch();
}