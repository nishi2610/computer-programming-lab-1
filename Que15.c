#include <stdio.h>
int main()
{
int a[50], size;
printf("Enter the number of elements you want in the array:\n");
scanf("%d",&size);
printf("enter the elements:\n");
for(int i=0; i<size;i++)
    scanf("%d",&a[i]);

if(size>0){
    for(int i=0; i<size-1; i++)
        a[i]=a[i+1];
    size--;
    printf("the final array is:\n");
    for(int i=0; i<size;i++)
        printf("%d  ",a[i]);}
else{
 printf("ERROR: The array is empty");}

return 0;
}
