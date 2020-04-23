#include<stdio.h>
#include<conio.h>
main()
{
int n1,n2;
clrscr();
printf("Enter first no \n");
scanf("%d",&n1);
printf("Enter second no \n");
scanf("%d",&n2);
n1=n1+n2;
n2=n1-n2;
n1=n1-n2;
printf("Result after swapping %d %d",n1,n2);
getch();
}