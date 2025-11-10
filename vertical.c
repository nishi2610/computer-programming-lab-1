#include<stdio.h>
#include<string.h>
int main(){
char str[100];
printf("Enter the string: ");
gets(str);
printf("the string in vertical is:\n");
for(int i=0;i<strlen(str);i++){
    printf("%c\n",str[i]);}
return 0;
}
