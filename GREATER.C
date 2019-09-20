#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c,d;
 clrscr();
 printf("enter first value");
 scanf("%d",&a);
 printf("enter second value");
 scanf("%d",&b);
 printf("enter third value");
 scanf("%d",&c);
 if(a>b && a>c)
 {
 printf("%d is greater",a);
 }
 else if(b>a && b>c)
 {
   printf("%d is greater",b);
 }
 else if (c>a && c>b)
 {
   printf("%d is greater ",c);
 }

 getch();
}