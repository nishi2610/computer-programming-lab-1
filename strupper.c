#include<stdio.h>
#include<string.h>
int main(){
char str[100];
printf("Enter string:\n");
gets(str);
printf("the string in uppercase is:\n %s",strupr(str));
return 0;
}
