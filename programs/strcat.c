#include<stdio.h>
#include<string.h>
main()
{
    char arr1[15],arr2[15];
    int x;
    printf ("enter string1");
    scanf("%s",arr1);
    printf("enter string2");
    scanf("%s",arr2);
    strcat(arr1,arr2);
    printf("%s",arr1);
}
