#include<stdio.h>
#include<string.h>
main()
{
    char arr1[5],arr2[15];
    int x;
    printf("Enter string:\n");
    scanf("%s",arr1);
    strcpy (arr2,arr1);
    printf("%s", arr2);
}
