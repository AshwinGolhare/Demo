#include<stdio.h>
main()

 {
   int i,n,f =1;
   i= 1;
   printf("enter number:");
   scanf("%d",&n);
   while(i<=n)
   {
     f=f*i ;
     i= i+1;
     printf("fact value : %d",f);
   }
}
