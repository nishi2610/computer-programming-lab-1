#include <stdio.h>
int main()
{
int a[50],size,search_value,found=-1;
printf("enter the number of elements you want in the array:\n");
scanf("%d",&size);

printf("enter the elements:\n");
for(int i=0; i<size;i++)
    scanf("%d",&a[i]);
printf("Enter the value to search for: ");
scanf("%d", &search_value);
    for (int i = 0; i < size; i++) {
        if (a[i] == search_value) {
            found = i;
            break;}
    }
    if (found!=-1) {
        printf("\nValue %d was FOUND at index: %d\n", search_value, found);

    } else {
        printf("\nValue %d was NOT FOUND in the array.\n", search_value);
    }

    return 0;
}
