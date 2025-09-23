#include<stdio.h>
int main()
{
int c;
printf("enter the number of elements you want in the array (maximum 5): ");
  scanf("%d",&c);
if(c<6){
  int a[c];
  printf("enter %d numbers: \n",c);
  for(int i=0; i<c; i++){
    scanf("%d",&a[i]);}
  printf("the array is:\n");
  for(int i=0; i<c; i++){
          printf("%d\t",a[i]);}
  printf("\nthe reverse array is:\n");
  for(int i=c-1; i>=0; i--){
          printf("%d\t",a[i]);}
}
else
    printf("number greater than limit");
return 0;
}
