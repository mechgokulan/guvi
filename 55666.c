#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
printf("enter number:");
scanf("%d",&a);
printf("enter range");
scanf("%d",&b);
for(i=0;i<=b;++i)
{
printf("%d * %d =%d\n",a,i,a*i);
getch();
return 0;
}
