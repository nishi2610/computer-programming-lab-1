#include <stdio.h>
int main()
{
int a[50], size, pos;
printf("enter the number of elements you want in the array:\n");
scanf("%d",&size);
printf("enter the elements:\n");
for(int i=0; i<size;i++)
    scanf("%d",&a[i]);

printf("enter the position where you want to delete the element in the array:\n");
scanf("%d",&pos);

if(pos>=size|| pos<0)
    printf("ERROR:the entered position is invalid.\n");
else{
    if(size>0){
        for(int i=pos-1; i<size-1; i++)
            a[i]=a[i+1];
        size--;
        for(int i=0; i<size;i++)
            printf("%d  ",a[i]);}
    else{
        printf("ERROR: The array is empty");}}

return 0;
}
