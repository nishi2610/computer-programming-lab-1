#include <stdio.h>
int main()
{
    int a[2][2], b[2][2], c[2][2];
    printf("Enter 4 numbers for array a\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
            scanf("%d",&a[i][j]);}
    printf("enter 4 numbers for array b\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
            scanf("%d",&b[i][j]);}
    for(int i=0;i<2;i++){
            for(int j=0;j<2;j++)
                c[i][j]= a[i][j] * b[i][j];}
    printf("the array c is:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
            printf("%d\t",c[i][j]);
        printf("\n");}
    return 0;
}
