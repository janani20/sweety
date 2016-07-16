#include<stdio.h>
void main()
{
char s;
printf("\n Enter any character:");
scanf("%c",&s);
if(s>='a'&&s<='z')
printf("\n %c is a alphabet",s);
else
printf("\n %c is not a alphabet",s);
getch();
}
