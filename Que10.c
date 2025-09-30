#include <stdio.h>
int main()
{
int a[5], count, visited[5]={0};
printf("enter element: \n");
for(int i=0; i<5; i++)
    scanf("%d",&a[i]);

for(int i=0; i<5; i++){
    if (visited[i]==1)
        continue;
    count = 1;
    for(int j = i+1; j<5; j++){
        if(a[i]==a[j]){
            count++;
            visited[j]=1;}}
    printf("the frequency of %d is %d\n", a[i],count);}

return 0;
}
