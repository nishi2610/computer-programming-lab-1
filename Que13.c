#include <stdio.h>
int main()
{
int a[50], size, new, index;
printf("enter the number of elements you want in the array:\n");
scanf("%d",&size);

printf("enter the elements:\n");
for(int i=0; i<size;i++)
    scanf("%d",&a[i]);

printf("enter a new number that you want to insert in the array:\n");
scanf("%d",&new);
printf("enter the position where you want to insert the element in the array:\n");
scanf("%d",&index);

if(index>=size || index<0)
    printf("ERROR:the entered position is invalid.\n");
else{
    if(size>49)
        printf("ERROR: the array is full;can't insert a new number.\n");
    else{
        for(int i=size-1; i>=index; i--)
            a[i+1] = a[i];
        a[index-1] = new;
        size++;
        printf("The new array is:\n");
        for(int i=0; i<size; i++)
            printf("%d  ",a[i]);}
    }
return 0;
}
