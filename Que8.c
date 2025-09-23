#include<stdio.h>
int main()
{
int a[5],b[10];
printf("enter 5 numbers: \n");
for(int i=0; i<5; i++){
  scanf("%d",&a[i]);}
for(int i=0,j=0; i<5,j<10; i++, j=j+2){
    b[j]=a[i];}
for(int j=1;j<10;j=j+2){
    b[j]= 0;}
printf("the array with 10 elements is: \n");
for(int i=0; i<10; i++){
  printf("%d\t",b[i]);}
return 0;
}
