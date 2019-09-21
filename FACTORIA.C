#include<conio.h>
#include<stdio.h>
void main()
{
  int fact=1,num,i;
  clrscr();
  textcolor(BLUE);
  cprintf("Enter the number for know that factorial");
  scanf("%d",&num);
  for(i=1;i<=num;++i)
  {
    fact =fact*i;
    printf("\n%d",i);
  }

  textcolor(YELLOW);
  cprintf("\n%d",fact);
  getch();
}