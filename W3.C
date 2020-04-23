#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
int n,m,i,guess,trial=0,sum=0;
srand(time(0));
clrscr();
n=random(6);
m=random(100);
printf("Enter the number of times you will throw dice : ");
scanf("%d",&trial);
for(i=1;i=trial;i++)
{
	printf("%d",n);
	sum=sum+n;
	//printf("%d",sum);
	if(sum==m)
	{
		printf("You won the game");
		break;
	}
	else
	trial--;
}
getch();
}