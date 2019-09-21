#include<conio.h>
#include<stdio.h>
void main()
{
  int sum=0,num,i;
  clrscr();
  printf("Enter the number");
  scanf("%d",&num);
  for(i=0;i<=num;++i)
  {
    sum =sum+i;
    printf("\n%d",i);
  }

  textcolor(YELLOW);
  cprintf("\n%d",sum);
  getch();
}