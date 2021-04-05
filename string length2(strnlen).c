#include<stdio.h>  
#include <string.h>    
int main()
{
   int i=0,length=0;
   char s[30];
   printf("Enter the string");
   gets(s);
   while(s[i]!='\0')
   {
       length++;
       i++;
   }
   printf("%d",length);
   return 0;
}