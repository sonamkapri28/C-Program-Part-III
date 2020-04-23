#include<stdio.h>
#include<conio.h>
main ()
{
int n,esum=0,osum=0,rem=0;
clrscr();
printf("Enter the no \n");
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
printf("Sum of even no = %d \n",esum);
printf("Sum of odd no = %d \n",osum);
getch();
}