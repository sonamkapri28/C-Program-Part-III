#include<stdio.h>
#include<conio.h>
main()
{
float f,c,fa,ce;
clrscr();
printf("Enter the temperature in Fahrenheit \n");
scanf("%f",&f);
printf("Enter the temperature in Celcius \n");
scanf("%f",&c);
fa=((c*9)/5)+32;
ce=(f-32)*5/9;
printf("Fahrenheit = %f \n",fa);
printf("Celcius = %f",ce);
getch();
}