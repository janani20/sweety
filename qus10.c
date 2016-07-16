#include<stdio.h>
void main()
{
int i,n,n1,s=0,r,count=0;
printf("\n Enter the digit:");
scanf("%d",&n);
n1=n;
while(n>0)
{
n=n%10;
count++;

}
printf("\n Number of integer %d",n1);
printf("\n Number of digits %d",count);
getch();
}
