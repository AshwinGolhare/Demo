#include<stdio.h>
main()

 {
   int x;
   int a,b,c;
   printf("1 Add\n2Sub\n3Mult\n4Div\n");
   printf("Enter your choise:");
   scanf ("%d",&a);
   switch(x)

   {
     case 1 :
      c=a+b;
      printf("Addition is : %d",c);
      break;

    case 2:
       c=a-b;
       printf("Substraction is: %d",c);
       break;

    case 3:
       c=a*b;
       printf("Multiplication is:%d",c);
       break;
    case 4:
       c=a/b;
       printf("Division is : %d",c);
       break;

    default:
       printf("wrong choise..");
   }


}
