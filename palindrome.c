#include<stdio.h>
#include<string.h>
int main(){
char str[100],copy[100];
printf("Enter string: ");
gets(str);
strcpy(copy,str);
int result= strcmp(str,strrev(copy));
if(result==0)
    printf("It is a Palindrome");
else
    printf("it is not a Palindrome");
return 0;
}
