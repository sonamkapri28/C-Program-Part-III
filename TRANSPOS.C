#include<stdio.h>
#include<conio.h>
main()
{
int i,j,a[4][4],r,c,t[4][4];
clrscr();
printf("Enter the no of rows \n");
scanf("%d",&r);
printf("Enter the no of columns \n");
scanf("%d",&c);
printf("Enter element of first matrix \n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		scanf("%d",&a[i][j]);
	}
}

for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		t[i][j]=a[j][i];
	}
}
printf("Transpose matrix \n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
	 printf("%d ",t[i][j]);
	}
	printf("\n");
}
getch();
}

