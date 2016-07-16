#include<stdio.h>
void main()
{
int i,n,sum=0;
printf("\n Enter the value :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("\n Sum of Natural numbers are %d",sum);
getch();
}
