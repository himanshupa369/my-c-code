#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=3;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
        printf("%d\t",j);
        }
        printf("\n");
    }
    for(i=1;i<=3;i++)
    {
        for(k=1;k<=i;k++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}