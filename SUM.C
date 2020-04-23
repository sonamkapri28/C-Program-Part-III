#include<stdio.h>
#include<conio.h>
main()
{
int n, esum=0,osum=0,rem;
clrscr();
printf("Enter the number \n");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
if(rem%2==0)
{
esum=esum+rem;
}
else
{
osum=osum+rem;
}
n=n/10;
}
printf("Sum of even numbers %d \n",esum);
printf("Sum of odd numbers %d",osum);
getch();
}