#include <stdio.h>
#include<string.h>
void main()
{
	char name[100],name1[100];
    int i=0,j,fw,lw,t;
    scanf("%s %s",name,name1);
    fw=strlen(name);
    lw=strlen(name1);
    t=fw+lw;
    for(i=fw;i<t;)
    {
      for(j=0;j<lw;j++)
       {
         name[i]=name1[j];
         i++;
       }
   }
for(i=0;i<t;i++)
printf("%c",name[i]);
getch();
}
