#include <stdio.h>
int main(void) {
	int a,b,c,d,e,f,g,h,time,timer,sub;
	scanf("%d %d",&a,&b);
	scanf("%d %d",&c,&d);
	e=a*60;
	f=c*60;
	g=e+b;
	h=f+d;
	sub=g-h;
	time=sub/60;
	printf("%d\t",time);
	timer=sub%60;
	if(timer==0)
	{
	printf("0");
	}
	else
	printf("%d",timer);
	return 0;	
}
