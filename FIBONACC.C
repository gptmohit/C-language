#include<conio.h>
#include<stdio.h>
void main()
{
  int num, n1=0,n2=1,n3=0,i;
  clrscr();
  textcolor(BLUE);
  cprintf("enter the number of element in fibonacci");
  scanf("%d",&num);
  printf("%d ",n1,n2);
  for(i=2;i<num;++i)
  {
    n3=n1+n2;
    textcolor(YELLOW);
    cprintf("%d  ",n3);
    n1=n2;
    n2=n3;


  }

  getch();
}