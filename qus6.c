#include<stdio.h>
void main()
{
int year;
printf("\n Find whether given year is leapyear");
printf("\n Enter year \n");
scanf("%d",&year);
if(year%4==0)
printf("%d is leap year",year);
else
printf("%d is not leap year",year);
getch();
}
