#include <stdio.h>
int main() {
int a[10];
printf("Enter 10 values:\n");
for (int i = 0; i < 10; i++) {
    printf("Enter value %d: ", i + 1);
    scanf("%d", &a[i]);}
printf("The 4th value you entered is: %d\n", a[3]);
printf("The 7th value you entered is: %d\n", a[6]);
printf("The 9th value you entered is: %d\n", a[8]);
return 0;
}
