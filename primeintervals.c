#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{
for(j=2;j<=a-1;j++)
{
if(a%2!=0)
{
printf("%d",a);
}
}
}
getch();
}
