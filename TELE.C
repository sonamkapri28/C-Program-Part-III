#include<stdio.h>
#include<conio.h>
struct tele
{
	char nm[10];
	int age;
	long int no;
};
main()
{
int i,n;
FILE *fp;
struct tele t[100];
clrscr();
printf("Enter limit of array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("Enter name : ");
	scanf("%s",t[i].nm);
	printf("Enter age : ");
	scanf("%d",&t[i].age);
	printf("Enter telephone no : ");
	scanf("%ld",&t[i].no);
}
fp=fopen("f3.txt","wb");
fwrite(&t,sizeof(t[0]),n,fp);
fclose(fp);
fp=fopen("f3.txt","rb");
if(fp==NULL)
	printf("File does not exist");
fp=fread(&t,sizeof(t[0]),n,fp);
printf("Name\tAge\tTelephone no.\n");
for(i=0;i<n;i++)
{
	printf("%s\t%d\t%ld\n",t[i].nm,t[i].age,t[i].no);
}
fclose(fp);
getch();
}