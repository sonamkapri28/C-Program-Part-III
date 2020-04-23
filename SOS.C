#include<stdio.h>
#include<conio.h>
main()
{
int n,i;
float esum=0,osum=0,sum=0;
clrscr();
printf("Enter the limit \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	if(i%2==0)
	{
		esum=esum+1/(float)i;
	}
	else
	{
		osum=osum+1/(float)i;
	}
}
sum=osum-esum;
printf("Sum of series is %f",sum);
getch();
}