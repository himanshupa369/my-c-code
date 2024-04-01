#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,i,j;
    float s,f;
    printf("enter the number of terms n\n");
    scanf("%d",&n);
    printf("input x:");
    scanf("%d",&x);
    s=1;
    f=1;
    for(i=1;i<=n;i++)
    {
        f=1;
        for(j=1;j<=i;j++)
        {
            f*=j;
            s+=pow(-x,i);
        }

    }
    printf("sum of series:%.2lf",s);
    return 0;
}