#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
printf("Enter string:\n");
gets(str);
printf("the length of the string is: %d",strlen(str));
return 0;
}
