#include<stdio.h>
int main()
{
int amount, count, a[9]={500,200,100,50,20,10,5,2,1};
printf("enter the amount:");
scanf("%d",&amount);
printf("\nminimum notes required is:\n");
for(int i=0; i<9; i++){
    count = amount/a[i];
    if(count>0){
        printf("%d notes of Rs.%d\n", count,a[i]);}
    amount= amount % a[i];}
return 0;
}
