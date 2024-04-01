#include<stdio.h>
int main()
{
    int n=5,i,j,k;
for(i=n;i>=1;i--)
{
    for(j=1;j<=n-i;j++)
    printf(" \t");
    for(j=i;j>=1;j--)
    printf("%d\t",j);
    printf("\n");
}
}
