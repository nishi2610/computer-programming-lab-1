#include<stdio.h>
#include<string.h>
int main(){
char str1[100],str2[100];
printf("Enter string1: ");
gets(str1);
printf("Enter string2: ");
gets(str2);
int result= strcmp(str1,str2);
if(result==0)
    printf("Both strings are the same");
else if (result<0)
 printf("First string is lexicographically smaller than second string");
else if (result>0)
 printf("First string is lexicographically greater than second string");
return 0;
}
