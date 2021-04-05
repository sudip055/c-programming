#include<stdio.h>
#include<string.h>
int main()
{
   int i=0;
   char c[20]="subash";
   char p[20];
   while(c[i]!='\0')
{ 
    p[i]=c[i];
    i++;
}
printf("%s",p);
}