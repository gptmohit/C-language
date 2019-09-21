#include<conio.h>
#include<stdio.h>
void main()
{
  int even=0,odd=0,num,i;
  clrscr();
  textcolor(BLUE);
  cprintf("Enter the number for find the sum of even or odd numbers");
  scanf("%d",&num);
  for(i=1;i<=num;i++)
  {
    if(i%2==0)
    {
      even=even+i;
    }
    else
    {
      odd=odd+i;
    }
  }

  textcolor(YELLOW);
  cprintf(" sum of even numbers %d\n",even);
  cprintf(" sum of odd numbers %d",odd);
  getch();
}