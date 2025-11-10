#include <stdio.h>
int main()
{
int a[50],size;
printf("enter the number of elements you want in the array:\n");
scanf("%d",&size);

printf("enter the elements:\n");
for(int i=0; i<size;i++)
    scanf("%d",&a[i]);

 if (size>0) {
        size--;
        printf("Successfully 'deleted' the last element.\n");
        printf("New Array:\n");
        for(int i=0; i<size;i++){
            printf("%d\t",a[i]);}
    }
else
    printf("Array is already empty. Cannot delete.\n");
return 0;
}
