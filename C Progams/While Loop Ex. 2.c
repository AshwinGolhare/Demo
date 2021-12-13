#include<stdio.h>
#include<conio.h>
main()
{
int n,x,num1,num2;
printf("Enter Number:");
scanf("%d", &n);
num1=n%10;
 while(n>0)
 {
  num2=n%10;
  n=n/10;
 }
 x=num1+num2;
 printf("\n%d", x);
}
