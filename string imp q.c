#include<stdio.h>
#include<string.h>
int main()
{
    char s[20]="raar";
    char temp[20];
    strcpy(temp,s);
    if(strcmp(strrev(s),temp)==0)
    {
        printf("palindrome");
    }
    else
    printf("not");
}