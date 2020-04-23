#include<stdio.h>
#include<conio.h>
struct stud
{
	int roll;
	char nm[10];
	int marks;
};
void insert();
void display();
void modify();
void main()
{
	int choice;
	char ch;
	clrscr();
	do
	{
		printf("1.Add records \n2.Display records \n3.Modify record\n");
		printf("Enter choice ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:insert();
				break;
			case 2:display();
				break;
			case 3:modify();
				break;
			default :
				printf("Invalid choice");
				break;
		}
		printf("Do you want to continue ?");
		fflush(stdin);
		scanf("%c",&ch);
	}
	while(ch=='y'||ch=='Y');
	getch();
}
void insert()
{
	int n=3,i;
	struct stud s[3];
	FILE *fp;
	fp=fopen("f4.txt","wb");
	for(i=0;i<n;i++)
	{
	printf("Enter student's roll no. : ");
	scanf("%d",&s[i].roll);
	printf("Enter student's name :");
	scanf("%s",s[i].nm);
	printf("Enter student's marks : ");
	scanf("%d",&s[i].marks);
	fwrite(&s,sizeof(s[0]),1,fp);
	}
	fclose(fp);
}
void display()
{
	FILE *fp;
	struct stud s[3];
	int n=3,i;
	fp=fopen("f4.txt","rb");
	if(ferror(fp))
	{
		printf("Error occur");
	}
	printf("Roll no\tName\tMarks\n");
	while(fread(&s,sizeof(s[0]),1,fp)>0)
	{
		for(i=0;i<n;i++)
		{
		printf("%d\t%s\t%d\n",s[i].roll,s[i].nm,s[i].marks);
		}

	}
	fclose(fp);
}
void modify()
{
	FILE *fp;
	struct stud s[3];
	int roll,i=0;
	char name[10];
	fp=fopen("f4.txt","wb+");
	printf("Enter the new record to be modified");
	scanf("%s",name);
	while(fread(&s,sizeof(s),1,fp)>0)
	{
		if(strcmp(name,s[i].nm)==0)
		{
			printf("Enter roll no");
			scanf("%d",&roll);
		} i++;
	}
	fclose(fp);
}
