#include<stdio.h>
#include<conio.h>
void main()
{
int num;
scanf("%d",&num);
if(num%2==0)
{
printf("%d",num);
}
else
{
printf("%d",(num-1));
}
getch();
}
