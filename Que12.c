#include <stdio.h>
int main()
{
int a[50], size, new;
printf("enter the number of elements you want in the array:\n");
scanf("%d",&size);

printf("enter the elements:\n");
for(int i=0; i<size;i++)
    scanf("%d",&a[i]);

printf("enter a new number that you want to insert in the array:\n");
scanf("%d", &new);
if(size>49)
    printf("ERROR: The array is full; can't insert a new number.\n");
else{
    for(int i=size-1;i>=0;i--)
        a[i+1]=a[i];
    a[0]=new;
    size++;
    printf("the final array is:\n")
    for(int i=0; i<size;i++)
        printf("%d  ",a[i]);}

return 0;
}
