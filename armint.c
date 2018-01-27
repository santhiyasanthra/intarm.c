#include <stdio.h>
int main()
{
  int first, last, i, temp, num, rem;
 
  scanf("%d %d", &first, &last);
  printf("%d  %d\n", first,last);
  for(i=first+1; i<last; ++i)
  {
      temp=i;
      num=0;
      while(temp!=0)
      {
          rem=(temp%10);
          num+=rem*rem*rem;
          temp/=10;
      }
      if(i==num)
      {
          printf("%d\t ",i);
      }
  }
  return 0;
}
