#include<stdio.h>
int main()
{
    int n,i,j,p;
    printf("enter the size of pattern\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        printf(" \t");
        p=1;
        for(j=1;j<=i;j++)
        printf("%d\t",p++);
        for(j=1;j<i;j++)
        printf("%d\t",p++);
        printf("\n");
    }
    return 0;
}