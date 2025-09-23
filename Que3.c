#include<stdio.h>
int main()
{
int a[5],k;
printf("enter 5 numbers");
for(int i=0; i<5; i++){
  scanf("%d",&a[i]);}
for (int i=0; i<5;i++){
    for(int j=0;j<5;j++){
        if(a[i]>a[j]){
            k=a[i];
            a[i]=a[j];
            a[j]=k; }
    }
}
printf("the numbers in descending order are:\n");
for(int i=0; i<5; i++){
  printf("%d\n",a[i]);}
return 0;
}
