#include<stdio.h>
#include<conio.h>
main()
{
int n,no,i,sum=0,count=0;
float avg;
clrscr();
printf("Enter the count ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	scanf("%d",&no);
	count++;
	if(no<0)
	{
		break;
	}
		sum=sum+no;
		avg=sum/count;
}
printf("Sum is %d \n",sum);
printf("Average is %f ",avg);
getch();
}