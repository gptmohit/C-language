#include<conio.h>
#include<stdio.h>
void main()
{
  int n,i,m,r,sum=0,temp;
  clrscr();
  printf("enter a number");
  scanf("%d\n",&n);
  temp=n;
  while(n>0)
  {
   r=n%10;
   printf("module is %d\n",r);
   m=r*r*r;
   printf("cube is %d\n",m);
   sum=sum+m;
   printf("sum is %d\n",sum);
   n=n/10;
   printf("remain is %d\n",n);
  }
  n=temp;
  if(n==sum)
  {
    printf(" number is armstrong %d",sum);
  }
  else
  {
    printf("number is not armstrong");
  }
  getch();
}
