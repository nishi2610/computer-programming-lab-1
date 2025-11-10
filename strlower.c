#include<stdio.h>
#include<string.h>
int main(){
char str[100];
printf("Enter string:\n");
gets(str);
printf("the string in lowercase is:\n %s",strlwr(str));
return 0;
}
