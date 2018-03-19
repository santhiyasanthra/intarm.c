#include<stdio.h>
#include<conio.h>
void main()
{
           int num[100],n,add=0,i,average=0;
           scanf("%d",&n);
           for(i=0;i<n;i++)
           {
           scanf("%d",&num[i]);
           }
          for(i=0;i<n;i++)
         {  
            add=add+num[i];
          }
        average=add/n;
       printf("%d",average);
getch();
}
