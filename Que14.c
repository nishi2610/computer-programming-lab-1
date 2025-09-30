#include <stdio.h>
int main()
{
int a[50],size,new;
printf("enter the number of elements you want in the array:\n");
scanf("%d",&size);

printf("enter the elements:\n");
for(int i=0; i<size;i++)
    scanf("%d",&a[i]);

printf("enter a new number that you want to insert in the array:\n");
scanf("%d",&new);
if(size>49)
    printf("ERROR: the array is full;can't insert a new number.\n");
else{
    a[size]=new;
    size++;
    printf("the new array is:\n");
    for(int i=0; i<size; i++)
        printf("%d  ",a[i]);}

return 0;
}
