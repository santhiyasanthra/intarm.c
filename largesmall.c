#include<stdio.h>
#include<conio.h>
void main()
{
  int i,large=0,small=0,num[90],n;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
  {
	scanf("%ld",&num[i]);
  }
	large=num[0];
	for(i=0;i<n;i++)
	{
		if(num[i]>large)
    {
			large=num[i];
		}
	}
	small=num[0];
	for(i=0;i<n;i++)
	{
		if(num[i]<small)
		{
		small=num[i];
	}
	}
	printf("%ld %ld",large,small);
getch();
}
