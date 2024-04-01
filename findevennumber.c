#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            printf("even number=%d",i);
    }
    return 0;
}