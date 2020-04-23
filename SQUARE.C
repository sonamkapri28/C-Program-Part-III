#include<stdio.h>
#include<conio.h>
main()
{
int n,s;
clrscr();
printf("Enter the number \n");
scanf("%d",&n);
if(n%10==5)
{
s=n*n;
printf("Square is : %d",s);
}
else
printf("Invalid input");
getch();
}