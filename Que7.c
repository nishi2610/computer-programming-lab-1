#include<stdio.h>
int main()
{
int a[4][4],b[4][4];
printf("Enter the elements of the matrix:\n");
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        printf("Enter the element%d,%d: ",i+1,j+1);
        scanf("%d",&a[i][j]);}}
printf("\nThe entered matrix is:\n");
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        printf("%d\t",a[i][j]);}
    printf("\n");}
printf("\nThe transpose of matrix is:\n");
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        b[i][j]=a[j][i];
        printf("%d\t",b[i][j]);}
    printf("\n");}
return 0;
}
