#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{
for(j=2;j<=a/2;j++)
{
if(a%j!=0)
{
printf("%d",a);
}
}
}
getch();
}
