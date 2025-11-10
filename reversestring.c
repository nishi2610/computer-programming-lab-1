#include<stdio.h>
#include<string.h>
int main(){
char str[100];
printf("Enter string: ");
gets(str);
printf("the string in reverse is: %s",strrev(str));
return 0;
}
